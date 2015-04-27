#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float AguaCaida;
  char i;
  float max;
  float min;
  char inicial=0;
  float acumulador=0;
  
  
  
  for(i=0;i<5;i++)/*Lo termine en 5 para comprobar que funcionaba, lo que haria es ponerlo en 31 por todos los dias del mes :D*/
                   {
                        printf("Ingrese la cantidad de agua caida, en milimetros\n");
                        scanf("%f",&AguaCaida);
                        fflush(stdin);
                        acumulador=acumulador+AguaCaida;
                        
                            while(inicial==0)
                            {
                            max=AguaCaida;
                            min=AguaCaida;
                            inicial=1;
                            }
                            
                            if(AguaCaida>max)
                            {
                            max=AguaCaida;
                            }
                            if(AguaCaida<min)
                            {
                            min=AguaCaida;
                            }                            
                   }
  acumulador=acumulador/i;
  
  printf("La cantidad maxima de lluvia caida es: %2f\n",max);
  printf("La cantidad minima de lluvia caida es: %2f\n",min);
  printf("El promedio es: %2f\n",acumulador);
  
  
                                     
  system("PAUSE");	
  return 0;
}
