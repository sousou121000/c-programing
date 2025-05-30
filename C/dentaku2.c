#include <stdio.h>
int main(void){
    int mode;
    float a,b,goukei;
    printf("モードを選択してください（１：足し算、２：引き算、３：掛け算\n");
    scanf("%d",&mode);
    printf("1つ目の値入力\n");
    scanf("%f",&a);
    printf("2つ目の値入力\n");
    scanf("%f",&b);
   printf("答えは%fです\n",goukei);
    return 0;
}

if(mode==1){

float tasu(float a,float b){
    goukei=tasu(a,b);
}
}
else if(mode==2){

float hiku(float a,float b){
    goukei=hiku(a,b);
}
}
else if(mode==3){

float kakeru(float a,float b){
    goukei=a*b;
}
else{
    printf("不正なモードです\n")
}
}