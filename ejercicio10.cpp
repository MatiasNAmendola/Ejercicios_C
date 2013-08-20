#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main()
{
    float mayor = 0, menor = 0, num;
    int i = 0;
	/*
	á     \xa0
    é     \x82
    í     \xa1
    ó     \xa2
    ú     \xa3
    Á     \xb5
    É     \x90
    Í     \xd6
    Ó     \xe0
    Ú     \xe9
    ñ     \xa4
    Ñ     \xa5
    ¿     \xa8
    */

	printf("Este programa indicar\xa0 el n\xa3mero m\xa0s grande y el menor\n"
    "de una serie de 5.\n");
    
    for(i=0;i<5;i++)
    {
         printf("\nIngrese un n\xa3mero (%i): ",i+1);
         
         letra = toupper(getch()); // Pasa a mayúsculas
         switch(letra)
         {
              case 'A':
                   canta++;
                   cantvoc++;
                   break;
              case 'E':
                   cante++;
                   cantvoc++;
                   break;
              case 'I':
                   canti++;
                   cantvoc++;
                   break;
              case 'O':
                   canto++;
                   cantvoc++;
                   break;
              case 'U':
                   cantu++;
                   cantvoc++;
                   break;
         }                  
    }
    
    printf("\n\nCantidad de vocales ingresadas: %i\n"
    "Cantidad de 'A': %i\nCantidad de 'E': %i\n"
    "Cantidad de 'I': %i\nCantidad de 'O': %i\n"
    "Cantidad de 'U': %i\n\n",cantvoc,canta,cante,canti,canto,cantu); 

    printf("Presione una tecla para salir...");
    getch();
	return 0;
}
