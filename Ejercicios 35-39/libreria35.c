int control(int num)
{
          if(num<-100||num>100)
          {
           printf("Error, vuelva a ingresar el numero dentro del rango\n");
           scanf("%d",&num);                     
          }
return num;
}
