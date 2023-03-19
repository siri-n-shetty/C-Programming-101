// Program to convert Fahrenheit to Celsius

#include<stdio.h>
int main(){
    float fah , c;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fah);

    //Convert to Celsius
    c = (float) 5/9 * (fah-32);

    printf("The resulting Celsius temperature is: %f", c);
}
