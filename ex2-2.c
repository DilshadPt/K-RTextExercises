//------------------------------------------------//
//    Exercise 2-2
//    For equivalent using if else


//----------------------------------------------//

#include<stdio.h>

main()
{
    int i;
    i=0;

    printf("i=0:\n");

here:
    printf("inside here:");

    if(i<=10) {
      printf("Inside For Loop :");
      printf("\t%d\n", i);
      i++;
    }
    else
      goto finish;
    goto here;
finish:
    printf("Completed Loop:");
}
