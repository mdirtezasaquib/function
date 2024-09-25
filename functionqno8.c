#include<stdio.h>

int evenodd(int a){
if(a%2==0){
    return 1;
}
else{
    return -1;
}
}

int main(){
     int a;
     printf("enter the no: ");
     scanf("%d",&a);

      int n=evenodd(a);

     if(n==1){
        printf("even");
     }
     else{
        printf("odd");
     }

    

    return 0;
}

