#include <stdio.h>
#include <math.h>

int main(){

    double radius = 0.00;
    double area = 0.00;
    double sphere_area = 0.00;
    double volume = 0.00;
    const double pi = 3.14159;

    printf("Please enter a radius of circle: ");
    scanf("%lf", &radius);

    area = pi * pow(radius, 2);
    sphere_area = 4*pi * pow(radius, 2);
    volume = 4.0 / 3.0 * pi * pow(radius, 3); // энд 3 ба 4 нь хойноо 0 тэй учир нь энэ double н хувуух үйлдэл учраас. Int хуваах үйлдэл бутархай гаргаж чадахгүй

    printf("\nThe circle area is %.2lf", area);
    printf("\nThe sphere area is %.2lf", sphere_area);
    printf("\nThe sphere volume is %.2lf", volume);

    return 0;
}