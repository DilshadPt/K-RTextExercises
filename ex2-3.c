/*


  exercise 2-3: convert hexadecimel to integer
  not completed
  segmentation fault



*/
#include<stdio.h>

main()
{
  int c, len, count, i;
  len=count=i=0;
  int a[10];

  for(i=0;i<10;i++) {
   a[i]=0;
  }

  while((c=getchar())!=EOF) {
    putchar(c);
    count++;

     while(count>2) {
      a[i]=c;
      i++; 
    }
  }
  len=count-2;

  printf("length of digits : %d\n digits :\n", count);

  for(i=0;i<10;i++) {
     printf("%d", a[i]);
  }
  printf("\n");

     
}



