/*  exercise 2-5
 *  Write the function any(s1,s2) , which returns the first location in a string s1
 *  where any character from the string s2 occurs, or -1 if s1 contains no characters from s2 .
 *
 */

#include<stdio.h>

void any(char p1[], char p2[])
{
  int i, j;

  for(i=0;p1[i]!='\0';i++) {
    for(j=0;p1[j]!='\0';j++) {
      if(p1[i]==p2[j]) {
        printf(" Location %d ", i);
        exit();
      }
    }
  }
  printf("\n -1 \n:");
}


main()
{

  char s1[10], s2[10];

  printf("Enter a string :");
  gets(s1);

  printf("Enter another  string:");
  gets(s2);

  any(s1, s2);

}
