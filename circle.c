// TO FIND AREA AND CIRCUMFERENCE OF A CIRCLE

#include<stdio.h>
int main(){
    float r, area, c;
    float PI = 3.14;

    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    
    c = 2*PI*r;
    area = PI*r*r;

    printf("The area os the circle is: %f\n", area);
    printf("The circumference of the circle is: %f", c);
    return 0;
}
