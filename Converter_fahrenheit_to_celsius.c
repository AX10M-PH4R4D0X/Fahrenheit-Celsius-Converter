#include <stdio.h>
#include <stdlib.h>

int FahtoCel(int);
int CeltoFah(int);


int main () {

    char whichone;
    int degree;

    printf("Welcome\n");
    printf("Press c for Fahrenheit ---> Celsius \n\n"Press f for  Celsius ---> Fahrenheit \n\n"");
    scanf("%c",&whichone);

    switch (whichone) {
      
    case 'c':
      
        printf("Please enter Fahrenheit degree\n");
        scanf("%d",&degree);
      
        printf("Celsius meaning ---> %d\n",FahtoCel(degree));
      
        break;

      
    case 'f':
      
        printf("Please enter Celcius degree\n");
        scanf("%d",&degree);
      
        printf("Fahrenheit meaning ---> %d\n",CeltoFah(degree));
      
        break;
      

      
    default:printf("Something is going wrong try again...\n");
      
        break;
      
    }
  

    return 0 ;
  
}



int FahtoCel(int c) {

    return (c*9/5+32);

}



int CeltoFah(int f) {

    return ((f-32)*5/9);

}
