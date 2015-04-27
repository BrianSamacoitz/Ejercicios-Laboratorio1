#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char *argv[])
{
    int numero;
    int contador;
    int cuadrado;
    int cubo;
    int resultado;
    int i;
        printf("Ingrese un numero");

        printf("\n");
        scanf("%d",&numero);
        fflush(stdin);       
                             for(contador=1;contador<=numero;contador++){
                                 cuadrado=contador*contador;
                                 cubo=contador*contador*contador;
                                 printf("%d\t%d\t%d\t\n",contador,cuadrado,cubo);}
                             system("PAUSE");	
  return 0;
}

