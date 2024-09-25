#include<stdio.h>

void squarePattern(){

int n;
printf("Enter the row no: ");
scanf("%d",&n);

for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        printf(" *");
    }
    printf("\n");
}
}

int main(){

  squarePattern();
  
    return 0;
}
