#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char nombreaux[70],nombre[40];
  float salario,valorhora,horasTrabajadas;
  char respuesta='s';
  
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
  puts(nombreaux);
  printf("Salario\t%.2f\n\n",salario);
  
  printf("¿Desea volver a calcular su salario? s/n\n");
  scanf("%c",&respuesta);
  fflush(stdin);
  system("CLS");
  }  
  
  system("PAUSE");	
  return 0;
}
