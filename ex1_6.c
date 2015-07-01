//Exercsise 1-6. Verify that the expression getchar() != EOF is 0 or 1.


#include<stdio.h>

main()
{
  
  int c;
  int v;
  v=(c!=EOF);
  printf("value of v before getchar(): %d\n", v);
  c=getchar();
  printf("\n'c'value\t%d\t'EOF'value%d\n ", c, EOF);
  while(c!=EOF){
    putchar(c);
    c=getchar();
    printf("'c' value%d\t'EOF' value%d\n ", c, EOF); 
    v=(c!=EOF);
    printf("value of v: %d\n", v);
  }
  printf("\nEOF value on exitting: %d\n", EOF);
}
