#include <stdio.h>

int main(){
    float a,area,volume, height;
    printf("Enter the values of radius: ");
    scanf("%f", &a);
    printf("Enter the value of height: ");
    scanf("%f", &height);
// circle
    area = 3.14 *a*a;
    
    printf("The area of the circle is: %.2f\n", area);

    // cylinder
    volume = area * height;
    printf("The volume of the cylinder is: %.2f\n", volume);
    return 0;
}