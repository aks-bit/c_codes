#include <stdio.h>

int main() {
    
    char buf[] ="abcdefghijklmnopqrstuvwxyz";
    char *ptr;
    ptr = &buf;
    int i = 0;
   printf("This program prints provided string character address\n"); 
   while(i>=0)
   {
    if(buf[i] == '\0')
    break;   
    printf("address of %c is 0x%x \n", *(ptr +i), (ptr + i));
    i++;
   }

    return 0;
}