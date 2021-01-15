#include<stdio.h>
//计算薪资——标准是standard时间，如果加班的话，加班时间会有1.5倍薪资。

int main()
{
    const int STANDARD =270;//标准工作时间
    const int RATE=20;//标准工资与时长比率
    int hours;//工作时间
    double salary;
    printf("please input how long have you worked:\n");
    scanf("%d",&hours);
    printf("\n");
    if(hours>=STANDARD){
       salary = (hours-STANDARD)*(1.5*RATE)+STANDARD*RATE;
    }else{
        salary = hours*RATE;
    }
    printf("the salary you will  get is %f",salary);
    return 0;
}
