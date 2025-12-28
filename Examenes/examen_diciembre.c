#include <stdio.h>
#include <stdlib.h>

#define MAX_PESOS 25 // nº máximo de pesos registrados por persona
#define MAX_NOMBRE_FICH 1000 // longitud máxima para el nombre del fichero
#define MAX_NOMBRE 100 // longitud máxima del nombre de una persona

#define ALTURA_MIN 0.4
#define ALTURA_MAX 3
#define PESO_MIN 3
#define PESO_MAX 300

typedef struct {
    char nombre[MAX_NOMBRE];
    double altura;
    int nPesos;      // número de pesos leídos para esa persona (nº de mediciones de su peso)
    double *pesos;   // array dinámico con todos los pesos registrados de la persona
    double pesoMedio;
    double imc;      // IMC calculado (peso medio / altura^2)
} Persona;

typedef struct {
    int nPersonas;
    Persona *personas;
} Grupo;

long numeroPersonas(char *fichero);
/*Recorre el fichero leyendo datos para contar cuántas personas contiene. 
 *Devuelve el número de personas leídas, o -1 en caso de error.*/
Grupo *leerFichero(char *fichero);
/*Lee el fichero de entrada, obtiene el número de personas que contiene, 
reserva memoria para la estructura Grupo, para el array de personas y 
también para el array de datos de cada persona. Almacena los datos y 
devuelve un puntero a la estructura. En caso de error devuelve NULL*/
short imc(double altura, double peso, double *imc);
/*Dados una altura y un peso, calcula el IMC y lo devuelve en el tercer 
argumento. Devuelve 0 si todo OK o 1 si el argumento es inválido.*/
short calculaPesosMedios (Grupo *pgrupo);
/*Calcula, para cada persona, su peso medio como la media de los valores 
de su array de pesos. Devuelve 0 si todo OK o 1 si hay argumentos inválidos.*/
short imprimirFichero (char *fichero, Grupo *pgrupo);
/*Escribe en el fichero de salida un nombre y peso medio por línea. Devuelve 
0 si OK, o 1 en caso de fallo.*/
void liberarGrupo (Grupo *pgrupo);
/*Libera toda la memoria dinámica reservada para el grupo y las personas 
que lo forman (arrays de pesos, array de personas, etc.)*/

/*COMPORTAMIENTO DEL MAIN (1 punto)
    1. Pide al usuario los nombres de los ficheros de entrada y salida.
    2. Invoca leerFichero() para construir la estructura del grupo. Si 
    falla, imprime un mensaje y sale con código de error.
    3. Llama a calculaPesosMedios(); si hay error, informa y sale con 
    código de error, realizando antes las acciones pertinentes.
    4. Llama a imprimirFichero() para generar la salida; si hay error, 
    informa y sale con código de error, realizando antes las acciones pertinentes.
    5. Libera los recursos empleados y finaliza con éxito.
*/



int	main(void)
{
	char    fichero_imput[MAX_NOMBRE_FICH];
	char    fichero_output[MAX_NOMBRE_FICH];
    int     i;
	Grupo   *pacientes = NULL;

	printf("Nombre del fichero de entrada de datos: ");
	scanf("%s", fichero_imput);
	printf("Nombre del fichero de salida de los resultados: ");
	scanf("%s", fichero_output);

    //Llamada a leerFichero, si falla, mensaje de error y salida con código de error
	if (!(pacientes = leerFichero(fichero_imput))) {
        fprintf(stderr, "Error: No se pudo procesar el fichero de entrada.\n");
        return 1;
    }
    //Llamada a calculaPesosMedios, si falla, mensaje de error, salida con código de error y liberar memoria.
    if (calculaPesosMedios(pacientes) != 0) {
        fprintf(stderr, "Error en los datos para calcular medias.\n");
        liberarGrupo(pacientes);
        return 1;
    }
    //Llamada a imc, si falla, mensaje de error, salida con código de error y liberar memoria.
    for (i = 0; i < pacientes->nPersonas; i++) {
        if (imc(pacientes->personas[i].altura, pacientes->personas[i].pesoMedio, &pacientes->personas[i].imc) != 0) {
            fprintf(stderr, "Error en el cálculo del IMC con argumentos inválidos.\n");
        }
    }
    //Llamada a imprimirFichero, si falla, mensaje de error, salida con código de error y liberar memoria.
    if (imprimirFichero(fichero_output, pacientes) != 0) {
        fprintf(stderr, "Error al escribir el fichero de salida.\n");
        liberarGrupo(pacientes);
        return 1;
    }

    liberarGrupo (pacientes);
    printf("Proceso finalizado con éxito.\n");
    return (0);
}



Grupo *leerFichero(char *fichero)
{
	FILE    *f = NULL;
	Grupo   *pacientes = NULL;
    int     i, j;
	
    //Comprobar argumentos que se reciben como punteros
    if (fichero == NULL)    
    {
        fprintf (stderr, "Error: argumentos invalidos en la funcion leerFichero\n");
        return (NULL);
    }

    //Intentar abrir el archivo y comprobar errores
	if (!(f = fopen(fichero, "r")))
    {
        fprintf (stderr, "Error al abrir el fichero en la funcion leerFichero\n");
		return (NULL);
    }
	
	//Crear la estructura Grupo
	pacientes = (Grupo *) calloc (1, sizeof(Grupo));
	if (!pacientes)
    {
		fprintf (stderr, "Error al reservar la memoria de la estructura Grupo en la funcion leerFichero\n");
		return (NULL);
    }

	//Obtener el número de personas del fichero para reservar memoria para el array de personas
	pacientes->nPersonas = numeroPersonas(fichero);
	
	//Reservar memoria para el array de personas
	pacientes->personas = (Persona *) calloc (pacientes->nPersonas, sizeof(Persona));
	if (!pacientes->personas)
    {
		fprintf (stderr, "Error al reservar la memoria del array dinamico personas");
		liberarGrupo (pacientes);
		return (NULL);
    }
	//Crear el string dinamico del nombre de cada persona y reservar memoria para el array de pesos de cada persona
	for (i = 0; i < pacientes->nPersonas; i++)
	{	
		//Leer los datos de cada persona
        fscanf (f, "%s %lf %d", pacientes->personas[i].nombre, &pacientes->personas[i].altura, &pacientes->personas[i].nPesos);
		
        //Reservar memoria para el array de pesos de cada persona
        pacientes->personas[i].pesos = (double *) calloc (pacientes->personas[i].nPesos, sizeof (double));
        if (pacientes->personas[i].pesos == NULL)
        {
		    fprintf (stderr, "Error al reservar la memoria del array dinamico de pesos");
		    liberarGrupo (pacientes);
            return (NULL);
        }
        //Leer los pesos de cada persona
		for (j = 0; j < pacientes->personas[i].nPesos; j++)
		{
			fscanf (f, "%lf", &pacientes->personas[i].pesos[j]);
        }
    }
    //Cerrar el fichero
    fclose (f);
    //Devolver el puntero a la estructura Grupo
    return (pacientes);
}



long numeroPersonas(char *fichero)
{
	FILE	*f = NULL;
	long	contador = 0;
	int	    temp_pesos = 0;
	int	    i = 0;

    //Comprobar argumentos que se reciben como punteros
    if (fichero == NULL)
    {
        fprintf (stderr, "Error: argumentos invalidos en la funcion numeroPersonas\n");
        return (-1);
    }

    //Intentar abrir el archivo y comprobar errores
	if (!(f = fopen(fichero, "r")))
    {
        fprintf (stderr, "Error al abrir el fichero en la funcion numeroPersonas\n");
        return (-1);
    }

    //Recorrer el fichero contando las personas
	while (fscanf(f, "%*s %*lf %d", &temp_pesos) == 1)
	{
        //Saltar los pesos asociados a la persona
		for (i = 0; i < temp_pesos; i++)
		{
			fscanf (f, "%*lf");
		}
        //Incrementar el contador de personas
		contador++;
	}
    fclose(f);
	return (contador);
}

short calculaPesosMedios (Grupo *pgrupo)
{
    double temp = 0;
    int i, j;

    //Comprobar argumentos que se reciben como punteros
    if (pgrupo == NULL)
    {
        fprintf (stderr, "Error: argumentos invalidos en la funcion calculaPesosMedios\n");
        return (1);
    }

    //Recorrer el array de personas
    for (i = 0; i < pgrupo->nPersonas; i++)
    {
        //Calcular la media de los pesos de cada persona
        for (j = 0, temp = 0; j < pgrupo->personas[i].nPesos; j++)
        {
            //Va sumando los pesos en la variable temporal
            temp = temp + pgrupo->personas[i].pesos[j];
        }
        //Calcula la media dividiendo entre el número de pesos
        pgrupo->personas[i].pesoMedio = temp / pgrupo->personas[i].nPesos;
    }
    //Retornar OK
    return (0);
}


short imc(double altura, double peso, double *valor_imc) 
{
    //Comprobar argumentos que se reciben como punteros
    if (valor_imc == NULL || altura < ALTURA_MIN || altura > ALTURA_MAX || peso < PESO_MIN || peso > PESO_MAX) {
        fprintf(stderr, "Error: argumentos invalidos en la funcion imc\n");
        return (1);
    }
    // Fórmula: IMC = peso / altura^2
    *valor_imc = peso / (altura * altura);
    //Retornar OK
    return (0);
}


short imprimirFichero (char *fichero, Grupo *pgrupo)
{
    FILE    *f = NULL;
    int     i;

    //Comprobar argumentos que se reciben como punteros
    if (fichero == NULL || pgrupo == NULL)
    {
        fprintf (stderr, "Error: argumentos invalidos en la funcion imprimirFichero\n");
        return (1);
    }

    //Abrir el fichero de salida para escritura
    if (!(f = fopen(fichero, "w")))
    {
        fprintf (stderr, "Error al abrir el fichero de salida en la funcion imprimirFichero\n");
        return (1);
    }

    //Escribir los datos en el fichero recorriendo el array de personas
    for (i = 0; i < pgrupo->nPersonas; i++)
    {
        fprintf (f, "%s \t %.2lf \t %.2lf\n", pgrupo->personas[i].nombre, pgrupo->personas[i].pesoMedio, pgrupo->personas[i].imc);
    }
    //Cerrar el fichero
    fclose (f);
    //Retornar OK
    return (0);
}



void liberarGrupo(Grupo *pgrupo) {
    //comprobar si el puntero es NULL si es así salir de la función
    if (pgrupo == NULL) return;

    //Si el array de personas no es NULL
    if (pgrupo->personas) {
        //Recorrer cada persona
        for (int i = 0; i < pgrupo->nPersonas; i++) {
            //Liberar el array de pesos de cada persona si no es NULL
            if (pgrupo->personas[i].pesos) {
                //Libera el array de pesos
                free(pgrupo->personas[i].pesos);
                //Poner a NULL el puntero después de liberar
                pgrupo->personas[i].pesos = NULL;
            }
        }
        //Liberar el array de personas
        free(pgrupo->personas);
        //Poner a NULL el puntero después de liberar
        pgrupo->personas = NULL;
    }
    //Finalmente liberar la estructura Grupo
    free(pgrupo);
}