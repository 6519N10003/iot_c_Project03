#include <stdio.h>

void main ()
{ 
    int number ;
    int i = 1;
    printf ("=============================\n") ;
    printf ("        Multipication\n") ;
    printf ("=============================\n") ;
    printf ("input Number : ") ;
    scanf ("%d", &number) ;
    printf ("\n=============================\n") ;

    do{
        printf ("%d x %d = %d \n", i , number ,i*number) ;
        i = i + 1 ;
    } while ( i <= 12 ) ;
}
