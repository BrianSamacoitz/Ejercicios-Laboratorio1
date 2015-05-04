#include "libreria35.h"
#define CANT 3

int validacion(int a)
{
while(a<-100||a>100)
              {
              printf("Error, vuelva a ingresar un numero dentro del rango (-100/100)\n");
              scanf("%d",&a);
              system("CLS");
              }
return a;   
}

int maxYmin(int num[])
{

int i,j;
int max,min,aux;
int contador=0;
           
for(i=0;i<CANT-1;i++)
{
contador++;
        for(j=i+1;j<CANT;j++)
        {
                if(num[i]<num[j])
                {
                aux=num[i];
                num[i]=num[j];
                num[j]=aux;                 
                }
        }
        }

printf("Numero Maximo: %d\n",num[0]);
printf("Numero Minimo: %d\n",num[contador]);
}
