// allo aloo
//james Mungai
/*lazima tutoke block*/

#include <stdio.h>

// Define Pi as a constant macro so it's easy to use everywhere
#define PI 3.14159265359

int main() {
    // Declare variables for inputs and outputs
    double radius, height;
    double volume, surfaceArea;

    // 1. Prompt user for radius and height
    printf("Enter the radius of the cylinder: ");
    scanf("%lf", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%lf", &height);

    // 2. Perform calculations
    // radius * radius gives r^2
    volume = PI * radius * radius * height;
    surfaceArea = (2 * PI * radius * radius) + (2 * PI * radius * height);

    // 3. Output results formatted to 2 decimal places
    printf("\n--- Cylinder Calculations ---\n");
    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surfaceArea);

    return 0;
}
