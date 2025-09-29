#include <stdio.h>
#include <math.h>

int main(){

    double radius = 0;
    double area = 0;
    double surface_area = 0;
    double volume = 0;
    double pi = 3.1416;

    printf("Enter the Radius: ");
    scanf("%lf", &radius);

    area = pow(radius,2) * pi;
    printf("Area: %.2lf\n", area);

    surface_area = pow(radius,2) * (4 * pi);
    printf("Surface Area: %.2lf\n", surface_area);

    volume = pow(radius,3) * 4/3 * pi ;
    printf("Volume: %.2lf\n", volume);



    return 0;
}