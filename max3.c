#include<stdio.h>
//三个数字的大小比较
int main()
{
    int a,b,c;
    printf("input three numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    int max;
    if(a<=b){
            max =b;
        if(b<=c){
            max =c;
        }

    }else{
         max =a;
        if(a<=c){
            max =c;
        }

    }
    printf("the max number is %d\n",max);

    return 0;
}
