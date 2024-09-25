#include<stdio.h>

void sum(){

    int a;
    printf("enter the first no: ");
    scanf("%d",&a);

    int b;
    printf("enter the second no: ");
    scanf("%d",&b);

    int c=a+b;
    printf(" sum = %d",c);
}

int main(){

    sum();

    return 0;
}

