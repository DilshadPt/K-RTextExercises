
/*Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or
more blanks by a single blank. */


#include<stdio.h>

main()
{
  int c, flag=0;      //flag is used to check number of spaces

  printf("Enter text with spaces and Press CTRL+D:\n");
  while((c=getchar())!=EOF){
    if(c==' '){
      if(flag==0){        //prints only one blank space and skips
      putchar(c);         //all else
      }
      flag=1;
    }
    else{
      flag=0;
      putchar(c);
    }
  }
}
