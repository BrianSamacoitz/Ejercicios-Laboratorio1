#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char numero;
  char resultado;
  
  printf("Ingrese un numero\n\n");
  scanf("%d",&numero);
  fflush(stdin);
  
  while(numero<0)
                 {
                  printf("ERROR, el numero debe ser mayor a cero\n\n");
                  printf("ingrese un numero\n");
                  scanf("%d",&numero);      
                 }
  
  resultado=numero*numero;
  printf("El cuadrado de este numero es:%d\n\n",resultado);
  
  system("PAUSE");	
  return 0;
}
