#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char numero;
  char i;
  char promedio;
  char acumulador=0;
  
  for(i=0;i<numero;i++)
                       {
                        printf("Ingrese un numero\n");
                        scanf("%d",&numero);
                        fflush(stdin);
                        acumulador=acumulador+numero;
                        
                       }
                                      promedio=acumulador/i;
                                      printf("El promedio es: %d\n\n",promedio);
  system("PAUSE");	
  return 0;
}
