#include <stdio.h>
#include <stdlib.h>
#include "libreria35.h"

int main(int argc, char *argv[])
{ 
  int num,numero,i;

  for(i=0;i<5;i++)
      {
      printf("Ingrese un numero dentro del rango (-100/100)\n");
      scanf("%d",&numero);
      fflush(stdin);
      numero=control(num);
      }  
printf("%d",num);

  system("PAUSE");	
  return 0;
}
