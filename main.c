
#include<stdio.h>
int main()
{
    float a, b, h;
    printf("Ingrese el valor del cateto a:\n");
    scanf("%f", &a);
    printf("Ingrese valor del cateto b:\n");
    scanf("%f", &b);
    h=(a*a+b*b);
    printf("El valor de la hipotenusa es %.2f", h);
    return 0;
}