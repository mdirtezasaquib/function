#include<stdio.h>

int multiply(){
    int a,b;
    scanf("%d%d",&a,&b);
    int c=a*b;
    return c; 
}

int main(){

    int ans=multiply();
    printf("multiply=%d",ans);
    return 0;
}

