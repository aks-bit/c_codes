#include <stdio.h>

 int input()
 {
    int num; 
    printf("Enter an integer number: ");
    scanf("%d", &num);  
    return (num);
 }     

int main()
{
    int num;
    int fact = 1;
    
   printf("This program calculates factorial.\n");
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