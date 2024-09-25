#include<stdio.h>

void table(){
    int table;
    printf("Enter the no: ");
    scanf("%d",&table);

    for(int i=1;i<=10;i++){
        printf(" %d * %d = %d\n",table,i,table*i);
    }
} 

int main(){

    table();
    table();
    
    return 0;
}
