#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int i;
int posicion;
int numero[10];


for(i=0;i<10;i++)
{
  printf("Ingrese posicion del numero a ingresar (1/10)\n");
  scanf("%d",&posicion);
  printf("ingrese numero\n");
  scanf("%d",&numero[posicion-1]);
}
system("CLS");  
  for(i=0;i<10;i++)
  {
  printf("posicion: %d\tnumero %d\n",i+1,numero[i]);                
  }
  system("PAUSE");	
  return 0;
}
