#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int numero;
  
  printf("Ingrese un numero\n");
  scanf("%d",&numero);
  
                      if(numero%2==0)
                                     {
                                            printf("El numero es par:%d\n",numero);
                                     }
                      else           
                                     {
                                            printf("El numero es impar:%d\n",numero);
                                     }
  system("PAUSE");	
  return 0;
}
