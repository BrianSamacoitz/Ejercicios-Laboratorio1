#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float valorhora;
  int antiguedad;
  char nombre[15];
  char canthoras;
  int importe;
  int resultado1;
  int resultado2;
  int resultado3;
  int resultado4;
  int resultado5;
  
  
  printf("Ingrese su nombre\n");
  scanf("%s",&nombre);
  fflush(stdin);
  
  printf("Ingrese el valor de las horas de trabajo\n");
  scanf("%f",&valorhora);
  fflush(stdin);
  
  printf("Ingrese su antiguedad\n");
  scanf("%d",&antiguedad);
  fflush(stdin);
  
  printf("Ingrese sus horas trabajadas\n");
  scanf("%d",&canthoras);
  fflush(stdin);
  
  resultado1=valorhora*canthoras;
  resultado2=antiguedad*30;
  resultado3=(((resultado1+resultado2)*13)/100);
  resultado4=(resultado1+resultado2)-resultado3;
  resultado5=resultado1+resultado2;
  
  printf("Su nombre es:%s\n",nombre);
  printf("Su antiguedad:%d\n",antiguedad);
  printf("Su valor de hora:%f\n",valorhora);
  printf("El valor a cobrar en bruto:%d\n",resultado5);
  printf("El total de descuentos son:%d\n",resultado3);
  printf("El valor total neto es:%d\n",resultado4);  
  
  
  
  system("PAUSE");	
  return 0;
}
