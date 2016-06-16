#include <stdio.h>
#include <stdlib.h>

/*int mayor(int x, int y)
{
       if (x==y) {
                  printf("Los num%cros son iguales", 130);
                  }
       if (x>y) {
                  printf("El n%Cmero %d es mayor que el n%cmero %d", 163, x, 163, y);
                  }
       if (x<y) {
                  printf("El n%cmero %d es menor que el n%cmero %d", 163, x, 163, y);
                  }
                  return x+y;
}*/

int main(int argc, char *argv[])
{

int i, x, y, z;

  printf("Introduzca la cantidad de num%cros que quiere promediar: ", 130);
                     scanf("%d", &x);
  
  
  for(i=1; i<x; i++) {
           printf("Introduzca el valor %d: ", i);
           scanf("%d", &z);
             
           }
  
  
 //mayor(x, y);
 system("PAUSE");
  	return 0;
}
