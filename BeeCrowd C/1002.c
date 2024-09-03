#include <stdio.h>

int main() {
    double ray, pi = 3.14159, area;

    scanf("%lf",&ray);

    area = pi * (ray * ray);

    printf("A=%.4lf\n",area);

    return 0;
}