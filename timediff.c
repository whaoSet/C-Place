//����ʱ��� 

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
	
//	int timediffMin =0;//ʱ���ֵ������Ϊ������λ 
//	timediffMin=(hour2-hour1)*60+(minute2-minute1);
//	printf("the time difference are %d minutes",timediffMin);

//	double timediffHour = 0;//ʱ���ֵ��СʱΪ������λ
//	double temp = minute2-minute1;
//	timediffHour = (hour2-hour1)+temp/60.0;
//	printf("the time difference are %lf hours",timediffHour);

	//ʱ���ΪxxСʱxx���ӵĸ�ʽ 
	
//	if(minute2>=minute1){
//		printf("the time difference are %d hours %d minutes\n",hour2-hour1,minute2-minute1);
//	}else{
//		int minutes = (hour2-hour1)*60+(minute2-minute1);
//		int hours = minutes/60;
//		minutes = minutes%60;
//		printf("the time difference are %d hours %d minutes\n",hours,minutes);
//	} 
	

	//�������ʱ��Ϊ����������ֵ�������Ǹ�����
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
