#include <stdio.h>

 int input()
 {
    int num; 
    printf("Enter an integer: ");
    scanf("%d", &num);  
    return (num);
 }     

int main()
{
    int num;
    int fact = 1;
    
   num = input();
   while(num < 0 )
   {
     printf("Negative number is invlid!\n");  
     num = input();  
   }
   
   while(num>0)
    {
      fact = fact * num;
      num--;
    }
    printf("Fcatorial = %d",fact);
    return 0;
}