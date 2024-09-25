#include<stdio.h>

int basePow(int base,int pow){
if(pow==0){
    return 1;
}

return base*basePow(base,pow-1);
}


int main(){

    int base;
    printf("Enter the base: ");
    scanf("%d",&base);

    int pow;
    printf("Enter the power: ");
    scanf("%d",&pow);

    int ans=basePow(base,pow);
    printf("Answer = %d",ans);




    return 0;
}