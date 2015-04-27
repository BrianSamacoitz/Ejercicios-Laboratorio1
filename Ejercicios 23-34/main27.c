#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char nombre[40],nombremax[100],nombremin[100];
  float puntosI,puntosCG,puntosB;
  char i,inicial=0;
  float acumulador=0,acumuladorpuntajes=0;
  float puntajeMayor,puntajeMenor;
  
  for(i=0;i<3;i++) //Aca lo puse en 3 para probar, pero deberia ir en 20
  {
  printf("Ingrese nombre y apellido\n");
  gets(nombremax);
  printf("Puntos por inteligencia\n");
  scanf("%f",&puntosI);
  printf("Puntos por cultura general\n");
  scanf("%f",&puntosCG);
  printf("Puntos por belleza\n");
  scanf("%f",&puntosB);
  fflush(stdin);
  system("CLS");
  
  acumulador=puntosI+puntosCG+puntosB;
  
                while(inicial==0)
                {
                puntajeMayor=acumulador;
                puntajeMenor=acumulador;
                inicial=1;
                }
                if(acumulador>puntajeMayor)
                {
                puntajeMayor=acumulador;
                strcpy(nombre,nombremax);
                }
                if(acumulador<puntajeMenor)
                {
                puntajeMenor=acumulador;
                strcpy(nombre,nombremin);
                }
  acumuladorpuntajes=acumuladorpuntajes+acumulador;
  }
  
  printf("Puntaje acumulado de todas las participantes:%.2f\n",acumuladorpuntajes);
  printf("Participante con puntaje mayor:%c\t%.2f\n",nombre,puntajeMayor);              
  printf("Participante con puntaje menor:%c\t%.2f\n",nombre,puntajeMenor);
  
  system("PAUSE");	
  return 0;
}
