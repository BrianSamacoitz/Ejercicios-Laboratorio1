#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char caracter;
    int contadorA=0;
    int contadorE=0;
    int contadorI=0;
    int contadorO=0;
    int contadorU=0;
    int i;
    
    printf("Ingrese una letra");
    for(i=0;i<20;i++)
    {
         printf("\n");
         scanf("%c",&caracter);
         fflush(stdin);
         caracter=tolower(caracter);
             
             switch(caracter)
             {
                             case'a':
                                     contadorA++;
                                     break;
                             case'e':
                                     contadorE++;
                                     break;
                             case'I':
                                     contadorI++;
                                     break;
                             case'O':
                                     contadorO++;
                                     break;
                             case'U':
                                     contadorU++;
                                     break;
            }
   
}           
    printf("Letra A:%d\n",contadorA);
    printf("Letra E:%d\n",contadorE);
    printf("Letra I:%d\n",contadorI);
    printf("Letra O:%d\n",contadorO);
    printf("Letra U:%d\n",contadorU);
    
    


    system("PAUSE");	
    return 0;
}
