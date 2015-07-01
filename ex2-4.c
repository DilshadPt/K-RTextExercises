/*   exercise 2-4
 *   Write an alternative version of squeeze(s1,s2) that deletes each character in
 *   s1 that matches any character in the string s2 .
 */

#include<stdio.h>




void squeeze(char p[], char q[])
{
 
  int i, j, k;
  for(i=0;p[i]!='\0';i++) {
    for(j=0;q[j]!='\0';j++) {

      if(p[i]==q[j]) {
        k=i;
        while(p[k]!='\0') {
          p[k]=p[k+1];
        }
      }

    }
  }
  puts(p);
  
}

main()
{
  char s[10], t[10];
  int i=0;

  printf("Enter string number 1:");
  gets(s);

  printf("Enter string number 2:");
  gets(t);

  squeeze(s, t);
}

  
