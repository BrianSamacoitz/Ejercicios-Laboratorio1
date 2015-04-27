#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int numero1;
  int numero2;
  
  printf("Ingrese el primer numero");
  scanf("%d",&numero2);
  fflush(stdin);
  printf("Ingrese el primer numero");
  scanf("%d",&numero1);
  fflush(stdin);
  
  printf("numero 1:%d\n",numero1);
  printf("numero 2:%d\n",numero2);
  
  
  system("PAUSE");	
  return 0;
}
