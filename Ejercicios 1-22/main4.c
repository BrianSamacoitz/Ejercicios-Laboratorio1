#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int numero;
    int perimetro;
    int base;
    int altura;
    
    
    printf("ingrese la base\n");
    scanf("%d",&base);
    fflush(stdin);
    printf("ingrese la altura\n");
    scanf("%d",&altura);
    fflush(stdin);
    
    perimetro=base*altura;
    printf("El perimetro es de:%d\n",perimetro);
  
  system("PAUSE");	
  return 0;
}
