#include<stdio.h>

int atoi(char s[])
{
  int i, n;
    n = 0;
  for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
    n = 10 * n + (s[i] - '0');
  return n;
}

main()
{
  char s1[10];
  int i=0, c, ret_val=0;

  printf("Enter some characters:");
  
  while((c=getchar())!=EOF) {
    s1[i]=c;
    i++;
  }
  ret_val=atoi(s1);
  printf("\n %d \n", ret_val);
}
