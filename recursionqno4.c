#include<stdio.h>

int factofAllNum(int n){
    if(n==1){
        return 1;
    }
    return n*factofAllNum(n-1);
}
int main(){

    int n;
    printf("enetr the no: ");
    scanf("%d",&n);

    int ans=factofAllNum(n);
    printf("factorial  = %d",ans);

    
    return 0;
}



