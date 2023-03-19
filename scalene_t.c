// Finding the area of a scalene triangle
// Scalene triangle does not have equal sides throughout
// Area of triangle with two sides and angle included between them

#include<stdio.h>
#include<math.h>

int main(){
    float a, b, angle, area, rad;
    float PI = 3.14;

    printf("Enter length of side a: ");
    scanf("%f", &a);

    printf("Enter length of side b: ");
    scanf("%f", &b);

    printf("Enter angle between them: ");
    scanf("%f", &angle);

    rad = (PI/180)*angle;
    area = (a*b*sin(rad))/2;

    printf("The area of the triangle is: %.3f", area);
    return 0;
}
