#include <stdio.h>

int main(void){
  int n,sum=0;
  scanf("%i",&n);
  for (int i=1;i<=n;i++){
    sum+=i;
  }
  printf("%i\n",sum);
}