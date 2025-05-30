#include <stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    if(num%2!=0)
    printf("%dは奇数です",num);
    else
    printf("%dは偶数です",num);
    return 0;
}