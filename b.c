#include <stdio.h>

float circumference(float rad){
    float circ;
    const float pi = 3.14;

    circ = 2 * pi * rad;

    return circ;
}

float area(float rad){
    float area;
    const float pi = 3.14;

    area = pi * rad * rad;
    return area;
}

int main(){

    float radius;

    printf("Enter the radius: ");
    scanf("%f",&radius);

    printf("The Circumference of the circle is: %.2f\n", circumference(radius));
    printf("The area of the circle is: %.2f", area(radius));

    return 0;
}