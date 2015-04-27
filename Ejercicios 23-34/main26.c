#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char dia[10];
  char diamax[20],diamin[20];
  float temp;
  float max,min;
  int inicial=0;
  char respuesta='s';
  
while(respuesta=='s')
{
  printf("Ingrese dia\n");
  scanf("%s",dia);
  printf("Ingrese Temperatura\n");
  scanf("%f",&temp);
fflush(stdin);
                while(inicial==0)
                {
                max=temp;
                min=temp;
                inicial=1;
                }
                if(temp>max)
                {
                max=temp;
                }
                if(temp<min)
                {
                min=temp;
                }
printf("¿Desea ingresar otro dia? s/n\n");
scanf("%s",&respuesta);                
fflush(stdin);                
}
                
                
printf("El dia mas calido fue:%.2f\n",max);
printf("El dia mas frio fue:%.2f\n\n",min);
  
  system("PAUSE");	
  return 0;
}
