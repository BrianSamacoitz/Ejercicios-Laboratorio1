#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char nombreaux[70],nombre[40];
  float salario,valorhora,horasTrabajadas;
  char respuesta='s';
  int contadorempleados=0;
  int inicial=0;
  float max,min;
  int salario1;
  
 while(respuesta=='s')
 {
  printf("Ingrese nombre y apellido\n");
  gets(nombreaux);
  printf("Ingrese horas trabajadas en un dia\n");
  scanf("%f",&horasTrabajadas);
  printf("Ingrese valor hora\n");
  scanf("%f",&valorhora);
  fflush(stdin);
  system("CLS");
  
  salario=((valorhora*horasTrabajadas)*5); 
                        
                      while(inicial=0);
                      {
                      max=salario;
                      min=salario;
                      inicial=1;
                      }
                      if(salario>max)
                      {
                      max=salario;
                      }
                      if(salario<min)
                      {
                      min=salario;
                      }
  contadorempleados++;
  puts(nombreaux);                    
  printf("Salario\t%.2f\n\n",salario);
  
  
  printf("¿Desea volver a calcular su salario? s/n\n");
  scanf("%c",&respuesta);
  fflush(stdin);
  system("CLS");
  
  } 
  printf("la cantidad de empleados que se les calculo el salario son:%d\n",contadorempleados);
  printf("El empleado con sueldo mayor es:%.2f\n",max);
  printf("El empleado con sueldo menor es:%.2f\n",min);
  
  
  system("PAUSE");	
  return 0;
}
