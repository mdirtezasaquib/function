#include<stdio.h>

void remqui(){
    int a,b;
    printf("enter the first no: ");
    scanf("%d",&a);
    printf("enter the second no: ");
    scanf("%d",&b);

    int c=a/b;
    int d=a%b;

    printf(" remainder = %d\n",c);
    printf(" quitent = %d",d);
}

int main(){

 remqui();

    return 0;
}
