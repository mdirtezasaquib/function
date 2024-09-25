#include<stdio.h>

int reverse(){

  int n;
  printf("Enter the no: ");
  scanf("%d",&n);
  int ld=0;
  int rev=0;

  while(n!=0){
   ld=n%10;
   rev=rev*10+ld;
   n=n/10;
  }
  return rev;

}

int main(){

  int m = reverse();
  printf("Reverse = %d",m);

    return 0;
}
