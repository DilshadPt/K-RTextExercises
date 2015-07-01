/* Exercise 1-14. Write a program to print a histogram of the frequencies of different characters
in its input. */


#include<stdio.h>

main()
{
  int c, i, j;
  int lw[10];
  
  for(i=0;i<10;i++)
    lw[i]=0;

  while((c=getchar())!=EOF) {
    if(c!=' ') {
      for(i=0;i<50;i++)
        lw[i]++;
    }
    else
      putchar(c);
  }

  j=0;
  for(i=0;i<10;i++) {
    for(;lw[j]>=0;lw[j]--) {
      printf("*");
    }
    printf("\n");
    j++;
  }
}
