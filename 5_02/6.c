#include <stdio.h>

int main(){
int a,n,s=0;
scanf("%d",&n);
n=n/2;
for(a=1;a<=n;a++){
    s=s+a*2;
} 
printf("%d\n",s);
    return 0;
}