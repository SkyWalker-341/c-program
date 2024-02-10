#include <stdio.h>
#include <math.h>

#define M_PI 3.14159265358979323846

int main()
{
    int radius, surface, volume;

    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);

    surface = 4 * M_PI * radius * radius;
    printf("The surface area is %d\n", surface);

    volume = (4/3) * M_PI * radius * radius * radius;
    printf("The volume of the circle is %d\n", volume);

    return 0;
}

