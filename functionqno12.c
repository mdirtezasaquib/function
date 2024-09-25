#include<stdio.h>

void fibbonacci(){
    int sp;
    printf("Enter the starting point : "); 
    scanf("%d",&sp);

    int ep;
    printf("Enter the ending point : ");
    scanf("%d",&ep);


        int f1=0;
        if(sp==0){
            printf("%d",f1);
        }
        int f2=1;
        if(sp==1){
            printf("%d",f2);
        }
        int f3=f1+f2;
    
    while(sp<=ep){
        
        while(sp>=f3){
            printf(" %d",f3);
            f1=f2;
            f2=f3;
            f3=f1+f2;
        }
        sp++;
    }
}

int main(){

fibbonacci();

    return 0;

}
