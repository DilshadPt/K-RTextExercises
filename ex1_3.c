// exercise 1-3
// Modify the temperature conversion program to print a heading above the table.
//

#include<stdio.h> 

main()
{
  int fahr, celsius;
  int lower, upper, step;

  lower=0;
  upper=300;
  step=20;
  celsius=lower;
  while(celsius<=upper){
    fahr=((9*celsius)/5)+32;
    printf("%d\t%d\n", celsius, fahr);
    celsius=celsius+step;
    }   
}
 
