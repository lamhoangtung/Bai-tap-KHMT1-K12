#include <stdio.h>

int main(void){
  int a,b,c,max,min;
  scanf("%i%i%i",&a,&b,&c);
  if (a>=b && a>=c) max=a;
  if (b>=a && b>=c) max=b;
  if (c>=a && c>=b) max=c;
  if (a<=b && a<=c) min=a;
  if (b<=a && b<=c) min=b;
  if (c<=a && c<=b) min=c;
  printf("So lon nhat la: %i\nSo nho nhat la: %i\n",max,min);
}
