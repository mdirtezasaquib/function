#include<stdio.h>

void pyramid(){
 int n;
printf("Enter the row no: ");
scanf("%d",&n);

for(int i=1;i<=n;i++){
    if(i%2==0){
        n++;
        break;
    }
    for(int j=n;j>=i;j--){
        printf(" ");
    }
    for()
    printf("\n");
}
 
}
int main(){

    pyramid();
    return 0;
}