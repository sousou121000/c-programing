#include <stdio.h>
int add(int a,int b);

int main(void){
int a,b;
scanf("%d",&a);
scanf("%d",&b);
printf("%d+%d=%d\n",a,b,add(a+b));
return a+b;
}