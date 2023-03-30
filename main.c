#include<stdio.h>
 int main()
 {
    int i, num;
    do {
        printf("Ingrese un numero entre 1 y 20, que quiere skippear");
        scanf("%d", &num);
    }while(num>20 || num<1);
    for(i=1; i<=20; i++)
    {
        if(i==num)
        {
            break;
        }
        printf("%d \n", i);
    }
    return 0;
 }