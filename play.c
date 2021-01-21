#include<stdio.h>
#include<stdlib.h>
struct date{
	int month ;
	int day ;
};
int main(){
	struct date wll ={01,01};
	printf("hello,王懒懒，嘿嘿\n");
	system("pause"); 
	printf("哈哈，让我们来测一下你的星座吧\n");
	system("pause");
	printf("现在来输入自己的生日怎么样？放心，这个程序没有传递的作用，我不会保存下来的，还没有那么厉害\n");
	system("pause");
	printf("没什么格式的，就简单两个数字就行了(举例1月2号，请输入 1 02)\n");
	
	scanf("%d %d",&(wll.month),&(wll.day));
	
	int i =wll.month;
	int j =wll.day;
	char ch[5];
	float num;
	sprintf(ch,"%d.%d",i,j); 
	sscanf(ch,"%f",&num);
	if(i>12||j>31){
		printf("你有毒，你家生日能到这个数值？");
	}else{
	printf("ok ,你的生日是%d月%d日，我记下来了（haha）\n",wll.month,wll.day);
	if(num>1.20&&num<2.18){
	printf("emm,生日是%d月%d日，是水瓶座\n",i,j);
	printf("特征：善良\n");
	printf("属性：风象"); 
	printf("幸运数字：3、5、7\n");
	printf("幸运物：竖琴螺\n");
	printf("幸运日：星期六\n");
	printf("幸运色：古铜色，蓝色，黄色\n");
	}else if(num>2.19&&num<3.20){
	printf("emm,生日是%d月%d日，是双鱼座\n",i,j);
	printf("特征：多情\n");
	printf("守护星：木星，海王星\n"); 
	printf("属性：水象\n");
	printf("幸运数字：5、7、8、10\n");
	printf("幸运物：马头鱼尾怪兽\n");
	printf("幸运日：星期四\n");
	printf("幸运色：银灰色、海蓝色、水绿色、绿色\n");
	
	}else if(num>3.21&&num<4.19){
	printf("emm,生日是%d月%d日，是白羊座\n",i,j);
	printf("特征：无\n");
	printf("守护星：火星\n");
	printf("属性：火象\n"); 
	printf("幸运数字：6、9、10、14、22\n");
	printf("幸运物：无\n");
	printf("幸运日：星期六\n");
	printf("幸运色：红色，咖啡色\n");
	}else if(num>4.20&&num<5.20){
	printf("emm,生日是%d月%d日，是金牛座\n",i,j);	
	printf("特征：\n优点：踏实靠谱，财务管理，艺术细胞，思维缜密，脚踏实地\n缺点：固执，不变通。缺乏自信，容易伤感");
	printf("守护星：\n"); 
	printf("属性：土象\n");
	printf("幸运数字：2、4、6、16\n");
	printf("幸运物：\n");
	printf("幸运日：星期二\n");
	printf("幸运色：无\n");
	}else if(num>5.21&&num<6.21){
	printf("emm,生日是%d月%d日，是双子座\n",i,j);	
	printf("特征：\n优点：反应灵敏，好奇心，幽默，不易上当\n缺点：低迷，缺乏安全感，神经质\n");
	printf("守护星：无\n");
	printf("属性：风象\n"); 
	printf("幸运数字：9、14、19、22、25\n");
	printf("幸运物：无\n");
	printf("幸运日：星期二\n");
	printf("幸运色：无\n");	
	}else if(num>6.22&&num<7.22){
	printf("emm,生日是%d月%d日，是巨蟹座\n",i,j);
	printf("特征：拐弯抹角，多愁善感，有责任心，人情味\n");
	printf("守护星：没写\n"); 
	printf("属性：水象\n");
	printf("幸运数字：2\n");
	printf("幸运物：没写\n");
	printf("幸运日：没写\n");
	printf("幸运色：没写\n");	
	}else if(num>7.23&&num<8.22){
	printf("emm,生日是%d月%d日，是狮子座\n",i,j);
	printf("特征：\n优点：博爱，谦虚，大方，开朗，风度，幽默感\n1缺点：接受奉承，主观太强，虚荣心，自以为是");
	printf("属性：相\n");
	printf("幸运数字：\n");
	printf("幸运物：没写\n");
	printf("幸运日：没写\n");
	printf("幸运色：没写\n");	
	}else if(num>8.23&&num<9.22){
	printf("emm,生日是%d月%d日，是处女座\n",i,j);
	printf("啥都没有，hh\n"); 
	printf("特征：\n");
	printf("守护星："); 
	printf("幸运数字：\n");
	printf("幸运物：\n");
	printf("幸运日：\n");
	printf("幸运色：\n");	
	}else if(num>9.23&&num<10.23){
	printf("emm,生日是%d月%d日，是天秤座\n",i,j);
	printf("特征：\n优点：责任心，善良，求知欲，和平，大度，平衡感，能伸曲\n缺点：优柔寡断，自卑，挫败感，纠结");
	printf("守护星："); 
	printf("幸运数字：3\n");
	printf("幸运物：\n");
	printf("幸运日：\n");
	printf("幸运色：褐色\n");	
	}else if(num>10.24&&num<11.22){
	printf("emm,生日是%d月%d日，是天蝎座\n",i,j);
	printf("特征：沉默是金\n");
	printf("守护星：\n"); 
	printf("幸运数字：1、6、11、28\n");
	printf("幸运物：\n");
	printf("幸运日：星期四\n");
	printf("幸运色：蓝色，绿色\n");	
	}else if(num>11.23&&num<12.21){
	printf("emm,生日是%d月%d日，是射手座\n",i,j);
	printf("特征：\n优点：幽默感，心胸开阔，认真，讲义气，团队精神\n缺点：心直口快，独断，偏激，反复无常\n");
	printf("守护星：木星"); 
	printf("属性：火相\n");
	printf("幸运数字：3、7、8、9\n");
	printf("幸运物：\n");
	printf("幸运日：星期四\n");
	printf("幸运色：蓝色，黑色，紫色，咖啡色，红色\n");	
	}else if(num>12.22&&num<13.19||num<1.19){
	printf("emm,生日是%d月%d日，是摩羯座\n",i,j);
	printf("特征：实际，忘我精神\n");
	printf("守护星：土星\n"); 
	printf("属性：土象");
	printf("幸运数字：8、16、26、35\n");
	printf("幸运物：\n");
	printf("幸运日：星期六\n");
	printf("幸运色：咖啡色\n");	
	}
	system("pause");
	return 0;
	} 

}
