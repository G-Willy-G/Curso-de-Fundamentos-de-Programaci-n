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
    double pesoMedio;   // Peso medio calculado (media de los pesos del array pesos)
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
    5. Libera los recursos empleados y finaliza con éxito.*/

int	main(void)
{
	char fichero_imput[MAX_NOMBRE_FICH];
	char fichero_output[MAX_NOMBRE_FICH];
	Grupo *pacientes = NULL;

	printf("Nombre del fichero de entrada de datos: ");
	scanf("%s", fichero_imput);
	printf("Nombre del fichero de salida de los resultados: ");
	scanf("%s", fichero_output);

	if ((pacientes = leerFichero(fichero_imput)) == NULL)
    {
		printf ("No se ha leido el fichero correctamente");
		return (1);
    }
    
    calculaPesosMedios (pacientes);
    

}

Grupo *leerFichero(char *fichero)
{
	FILE	*f = NULL;
    Grupo	*pacientes = NULL;
	size_t  i;
    size_t  j;
	
    //Abro el archivo
	if (!(f = fopen(fichero, "r")))
    {
        fprintf (stderr, "Error al abrir el fichero");
		return (NULL);
    }
	
	/*Creo ahora la estructura dinámica*/
	pacientes = (Grupo *) calloc (1, sizeof(Grupo));
	if (pacientes == NULL)
    {
		fprintf (stderr, "Error al reservar la memoria");
		return (NULL);
    }

	/*Busco la cantidad de personas*/
	pacientes->nPersonas = numeroPersonas(fichero);
	
	/*Creo el array dinamico de personas*/
	pacientes->personas = (Persona *) calloc (pacientes->nPersonas, sizeof(Persona));
	if (pacientes->personas == NULL)
    {
		printf ("Error al reservar la memoria del array dinamico personas");
		liberarGrupo (pacientes);
		return (NULL);
    }
	/*Creo el string dinamico del nombre*/
	for (i = 0; i < pacientes->nPersonas; i++)
	{	
		fscanf (f, "%s %lf %d", pacientes->personas[i].nombre, &pacientes->personas[i].altura, &pacientes->personas[i].nPesos);
		pacientes->personas[i].pesos = (double *) calloc (pacientes->personas[i].nPesos, sizeof (double));
        if (pacientes->personas[i].pesos == NULL)
        {
		    printf ("Error al reservar la memoria del array dinamico de pesos");
		    liberarGrupo (pacientes);
            return (NULL);
        }
		for (j = 0; j < pacientes->personas[i].nPesos; j++)
		{
			fscanf (f, "%lf", &pacientes->personas[i].pesos[j]);
        }
    }
    fclose (f);
    return (pacientes);
}

long numeroPersonas(char *fichero)
{
	FILE	*f = NULL;
	long	contador = 0;
    int     tempNPesos;
    double  tempPeso;
    char    tempNombre[MAX_NOMBRE];
	size_t	    i;

    if (fichero == NULL)
    {
        return (-1);
    }

	if (!(f = fopen(fichero, "r")))
    {
        printf ("Error al abrir el fichero");
        return (-1);
    }

	while (fscanf(f, "%s %*lf %d", tempNombre, &tempNPesos) == 2)
	{
        for (i = 0; i <  tempNPesos; i++) {
            fscanf(f, "%lf", &tempPeso);
        }
		contador++;
	}
    fclose(f);
	return (contador);
}

short calculaPesosMedios (Grupo *pgrupo)
{
    double temp = 0;
    int i, j;

    for (i = 0; i < pgrupo->nPersonas; i++)
    {
        for (j = 0; j < pgrupo->personas[i].nPesos; j++)
        {
            temp = temp + pgrupo->personas[i].pesos[j];
        }
        pgrupo->personas[i].pesoMedio = temp / pgrupo->personas[i].nPesos;
    }
    return (0);
}

void liberarGrupo (Grupo *pgrupo)
{
    int i;

    for (i = 0; i < pgrupo->nPersonas; i++)
    {
        free(pgrupo->personas[i].pesos);
    }
    free(pgrupo->personas);
    free(pgrupo);
}