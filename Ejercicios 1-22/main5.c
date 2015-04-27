#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int numero;
  
  printf("ingrese un numero\n");
  scanf("%d",&numero);
  
                      if(numero>0)
                      {
                                  printf("El numero es positivo:%d\n",numero);
                      }
                      else
                      {
                                  printf("El numero menor es negativo:%d\n",numero);
                      }
  system("PAUSE");	
  return 0;
}
