#include<stdio.h>

int sum(){
    int a,b;
    scanf("%d%d",&a,&b);
    int c=a+b;
    return c;
}

int main(){

    int ans=sum();
    printf(" sum= %d",ans);

    return 0;
}
