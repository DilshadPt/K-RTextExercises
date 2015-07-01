/* Program for temperature conversion using function call */



#include<stdio.h>

int temp_conv(int);

main()
{
  int fahr_Val;
  
  printf("Enter a temperature value in Fahrenheit:");
  scanf("%d", &fahr_Val);
  temp_conv(fahr_Val);
}

int temp_conv(int fahr)
{
    int celsius;
     
     
      
       
     
        
            celsius=5*(fahr-32)/9;
            printf("%d\t%d\n", fahr, celsius);
}

