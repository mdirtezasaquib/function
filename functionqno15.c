#include<stdio.h>

int pallin(int n){
int a=n; 
int ld=0;
int rev=0;
while(n!=0){
ld=n%10;
rev=rev*10+ld;
n=n/10;
}

if(a==rev){
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

int m=pallin(n);

if(m==1){
    printf(" %d this is pallindrome",n);
}
else{
    printf(" %d this is not pallindrome:",n);
}



    return 0;
}