#include <stdio.h>
int main(void){
int scores[5]={90,80,70,60,50};
int i,sum;
sum=0;
for(i=0;i<5;i++){
    sum+=scores[i];
    printf("%d\n",scores[i]);
}
    return 0;
}