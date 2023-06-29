#include <stdio.h>
#define PA  printf ("=============================\n") ;
void main ()
{ 
    int num1, num2 ,sum ;
    
PA
    printf ("        SUM-NUMBER\n") ;
PA

do{

    printf ("input Number 1 : ") ;
    scanf ("%d", &num1) ;
    printf ("input Number 2 : ") ;
    scanf ("%d", &num2) ;

    sum = num1 + num2 ;

    printf ("SUM of Number  : ", sum) ;

}while (sum <=500 ) ;
    
}
