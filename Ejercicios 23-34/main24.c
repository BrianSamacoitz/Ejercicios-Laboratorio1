#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float altura,max;
  char nombre[15];
  char nombremax;
  char i;
  char inicial=0;
  char respuesta='s';
  
while(respuesta=='s')
    { 
    printf("Ingrese nombre\n");
    scanf("%s",nombre);

    printf("Ingrese altura\n");
    scanf("%f",&altura);
    fflush(stdin);
    
        while(inicial==0)
        {
        max=altura;
        inicial=1;
        }
        
        if(altura>max)
        {
        max=altura;
        nombremax=nombre;
        /*strcpy(nombremax,nombre);*/
        }
    printf("¿Desea continuar? s/n\n");
    scanf("%c",&respuesta);
    
    }

           
printf("Nombre y apellido con altura maxima\n%c\t%f\n\n",nombremax,max);
/*No me sale el nombre*/
  
  system("PAUSE");	
  return 0;
}
