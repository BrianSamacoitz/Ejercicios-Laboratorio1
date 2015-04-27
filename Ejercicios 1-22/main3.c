#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char numero;
  char acumulador1=0,contador1=0;
  char acumulador2=0,contador2=0;
  char i;
  
  
  for(i=0;i<10;i++)
  {
  
  printf("Ingrese 10 numeros\n");
  scanf("%d",&numero);
  
                     
                     if(numero>0)
                                 {
                                 acumulador2=acumulador2+(numero);
                                 contador2++;
                                 }
                     else
                         {
                                 acumulador1=acumulador1+numero;
                                 contador1++;
                         }
}                       
  printf("La cantidad de numeros mayores a cero son:%d\n",contador2); 
  printf("La cantidad de numeros menores a cero son:%d\n",contador1);                       
                         
                         
                         
  system("PAUSE");	
  return 0;
}
