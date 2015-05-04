#include <stdio.h>
#include <stdlib.h>
#include "libreria35.h"
#define CANT 3

int main(int argc, char *argv[])
{
  int numero[CANT]={3,5,6};  
  int i;
  int promedio;
  int acumulador=0;
  
  
  /*for(i=0;i<CANT;i++)
  {
  printf("Ingrese un numero dentro del rango (-100/100)\n");
  scanf("%d",&numero[i]);
  system("CLS"); 
  numero[i]=validacion(numero[i]);
  acumulador=acumulador+numero[i];      
  }*/
  
  system("CLS");
  promedio=(acumulador/CANT);
  
  printf("Promedio: %d\n",promedio);
  for(i=0;i<CANT;i++)
  {
  printf("numero: %d\n",numero[i]);                   
  }
  
  
  maxYmin(numero[CANT]);
  
  
  
  system("PAUSE");	
  return 0;
}
