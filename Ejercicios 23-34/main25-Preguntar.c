#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char nombre[25];
  float promedio;
  int cantidad;
  char i;
  char respuesta='n';
  float nota;
  float acumulador=0;
  
  
  do{
  printf("Ingrese nombre y apellido\n");
  gets(nombre);
  fflush(stdin);
               for(i=0;i<6;i++)
                  {
                  printf("Ingrese 6 notas de a una\n");
                  scanf("%f",&nota);
                  acumulador=acumulador+nota;
                  }
  promedio=acumulador/i;
  printf("¿Desea ingresar otro alumno? s/n\n\n");
    scanf("%s",&respuesta);
    fflush(stdin);
  
  }while(respuesta!='n');
  
 printf("Nombre del Alumno:\tPromedio:\n%s\t\t\t%.2f\nºn",nombre,promedio); 
  
  
  
  system("PAUSE");	
  return 0;
}
