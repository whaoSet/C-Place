//测试时间差 

#include<stdio.h>

int main()
{
	int hour1,minute1;
	int hour2,minute2;
	printf("pleace input the time1:\n");
	scanf("%d %d",&hour1,&minute1);
	printf("pleace input the time2:\n");
	scanf("%d %d",&hour2,&minute2);
	printf("the time1 is %d:%d\n",hour1,minute1);
	printf("the time2 is %d:%d\n",hour2,minute2);
	
//	int timediffMin =0;//时间差值，分钟为计量单位 
//	timediffMin=(hour2-hour1)*60+(minute2-minute1);
//	printf("the time difference are %d minutes",timediffMin);

//	double timediffHour = 0;//时间差值，小时为计量单位
//	double temp = minute2-minute1;
//	timediffHour = (hour2-hour1)+temp/60.0;
//	printf("the time difference are %lf hours",timediffHour);

	//时间差为xx小时xx分钟的格式 
	
//	if(minute2>=minute1){
//		printf("the time difference are %d hours %d minutes\n",hour2-hour1,minute2-minute1);
//	}else{
//		int minutes = (hour2-hour1)*60+(minute2-minute1);
//		int hours = minutes/60;
//		minutes = minutes%60;
//		printf("the time difference are %d hours %d minutes\n",hours,minutes);
//	} 
	

	//当输入的时间为反过来，差值结果如果是负数？
	int minutes1 = hour1*60+minute1;
	int minutes2 =hour2*60+minute2;
	
	if(minutes2-minutes1<0){
		int m ,h;
		m =minute1;
		minute1 = minute2;
		minute2 =m;
		h =hour1;
		hour1=hour2;
		hour2=h;
	}
	 if(minute2>=minute1){
		printf("the time difference are %d hours %d minutes\n",hour2-hour1,minute2-minute1);
	}else{
		int minutes = (hour2-hour1)*60+(minute2-minute1);
		int hours = minutes/60;
		minutes = minutes%60;
		printf("the time difference are %d hours %d minutes\n",hours,minutes);
	} 
	return 0;
 } 
