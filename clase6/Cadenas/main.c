#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char cadena[20], buffer[500], otraCadena[15]=" que tal";

    printf("Ingrese una palabra: ");
    fflush(stdin);
    //scanf("%s", cadena);

    //fgets(cadena, 20, stdin);
    gets(buffer);
    while(strlen(buffer)>19)
    {
        printf("Reingrese!!!: ");
        gets(buffer);
    }

    strcpy(cadena, buffer);

   /* int comp = stricmp( "hola", cadena);

    printf("resultado: %d", comp);
*/
   // strupr(cadena);
    strlwr(cadena);

    strcat(cadena, otraCadena);
strcat(cadena, ", todo bien?");



    printf("ud Ingreso: %s", cadena);


    return 0;
}
