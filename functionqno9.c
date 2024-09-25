#include<stdio.h>

int prime(int n){
    int a=0;

    for(int i=2;i<n;i++){
        if(n%i==0){
            a=1;
            break;
        }
    }
    if(a==0){
        return 1;
    }
    else{
        return -1;
    }
}



int main(){

int n;
printf("enter the no: ");
scanf("%d",&n);

 int m=prime(n);
 
 if(m==1){
    printf("it is prime no");
 }
 else{
    printf("it is not prime no: ");
 }


    return 0;
}
