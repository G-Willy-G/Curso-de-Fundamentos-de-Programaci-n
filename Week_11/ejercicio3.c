#include <stdio.h>
#include <stdlib.h>

#define MAX_FILENAME 100
#define MAX_WORD 100

/* Prototipos exactos según lo solicitado */
int count_words(char *filename);
int count_characters(char *filename, char ch);

int main(void)
{
    char filename[MAX_FILENAME];
    int num_words;
    int num_characters;
    char ch;

    /* 1. Pedir datos al usuario */
    printf("Introduzca el nombre del fichero: ");
    scanf("%s", filename);
    
    printf("Introduzca el carácter a buscar: ");
    scanf(" %c", &ch); /* Nota el espacio antes de %c para limpiar el buffer */

    /* 2. Llamar a las funciones y GUARDAR el resultado */
    num_words = count_words(filename);
    num_characters = count_characters(filename, ch);

    /* 3. Mostrar resultados o errores */
    if (num_words == -1 || num_characters == -1) {
        printf("Error: No se pudo abrir el archivo '%s'.\n", filename);
    } else {
        printf("Hay %d palabras en el fichero %s\n", num_words, filename);
        printf("El carácter '%c' aparece %d veces en el fichero %s\n", ch, num_characters, filename);
    }

    return 0;
}

/* Función para contar palabras */
int count_words(char *filename)
{
    FILE *fichero;
    char temp[MAX_WORD];
    int counter = 0;

    /* Intentar abrir el archivo */
    fichero = fopen(filename, "r");
    if (fichero == NULL) {
        return -1; /* Retornar -1 en error */
    }

    /* Leer palabra por palabra. fscanf salta espacios automáticamente */
    while (fscanf(fichero, "%s", temp) == 1) {
        counter++;
    }

    fclose(fichero); /* Importante: cerrar el archivo */
    return counter;
}

/* Función para contar caracteres específicos */
int count_characters(char *filename, char ch)
{
    FILE *fichero;
    int counter = 0;
    int current_char;

    /* Intentar abrir el archivo */
    fichero = fopen(filename, "r");
    if (fichero == NULL) {
        return -1; /* Retornar -1 en error */
    }

    /* Leer carácter por carácter hasta el final (EOF) */
    while ((current_char = fgetc(fichero)) != EOF) {
        if (current_char == ch) {
            counter++;
        }
    }

    fclose(fichero); /* Importante: cerrar el archivo */
    return counter;
}