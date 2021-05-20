#include <stdio.h>
int main() {
    int n=0;
    int ball;
    int mod;
    int dev;
    printf("Enter a number: ");
    scanf("%d", &n);
 
   
    
         mod = n % 6; 
         dev = n / 6;
        
         ball=dev;
        
         n= mod;
        
         mod = n % 4; 
         dev = n / 4;
         
         ball=ball + dev;
        
         n= mod;
        
         mod = n % 3; 
         dev = n / 3;
         
         ball=ball + dev;
        
         n= mod;
        
         mod = n % 2; 
         dev = n / 2;
         
         ball=ball + dev;
        
         n= mod;
        
         mod = n % 1; 
         dev = n / 1;
         
         ball=ball + dev;
    
        printf("Total No of Ball Required: %d",ball);

    return 0;
}
