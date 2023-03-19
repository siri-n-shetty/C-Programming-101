// Reverse a given number

#include<stdio.h>
int main(){
    int n, digit, rev;

    printf("Enter the number to be reversed: ");
    scanf("%d", &n);

    rev = 0;                        // Initial reverse number
    while(n != 0){
        digit = n % 10;             // Obtain the least significant digit
        n = n/10;                   // Seperate the least significant digit
        rev = digit + (rev*10);     // Reverse the given number
    }

    printf("The reversed number is: %d", rev);
    return 0;
}
