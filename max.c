#include<stdio.h>

int main(){
    int number1,number2;
    int max;
    printf("please input two number:\n");
    scanf("%d %d",&number1,&number2);
    if(number1<=number2){
        max = number2;
    }else{
        max =number1;
    }
    printf("the bugger number is %d\n",max);
    return 0;
}
