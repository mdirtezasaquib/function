#include<stdio.h>

void pattern(){
    int n;
    printf("enter the no: ");
    scanf("%d",&n);

    char ch='A';
    int num=1;
    for(int i=1;i<=n;i++){
        num=1;
        for(int j=n;j>=i;j--){
            if(i==1){
                printf("%c",ch);
                ch++;
            }
            else if(i==n){
                printf("%c",ch);
                ch++;
            }
            else{
                printf("%d",num);
                num++;
            }
        }
        printf("\n");
    }
}
int main(){

    pattern();
    
    return 0;
}