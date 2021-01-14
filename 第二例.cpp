#define _CRT_SECURE_NO_WARNINGS 1
//题目：企业发放的奖金根据利润提成。
//
//利润(I)低于或等于10万元时，奖金可提10% ；
//利润高于10万元，低于20万元时，低于10万元的部分按10% 提成，高于10万元的部分，可提成7.5 % ；
//20万到40万之间时，高于20万元的部分，可提成5 % ；
//40万到60万之间时高于40万元的部分，可提成3 % ；
//60万到100万之间时，高于60万元的部分，可提成1.5 % ；
//高于100万元时，超过100万元的部分按1 % 提成。
//
//从键盘输入当月利润I，求应发放奖金总数？
#include<stdio.h>
int main()
{
	double lirun = 0;
	double jiangjin1 ,jiangjin2,jiangjin4,jiangjin6,jiangjin10,jiangjin;
	scanf("%lf", &lirun);
	//计算没一个阶段满值时所能得到的奖金额，为高一阶段的累加简化计算做准备；
	jiangjin1 = 100000 * 0.1; 
	jiangjin2 = jiangjin1 + 100000 * 0.075;
	jiangjin4 = jiangjin2 + 200000 * 0.05;
	jiangjin6 = jiangjin4 + 200000 * 0.03;
	jiangjin10 = jiangjin6 + 400000 * 0.015;
	//用if/else选择语句来表示奖金的获得和利润多少的关系
	if (lirun <= 100000) {
		jiangjin = lirun * 0.1;
	}
	else if (lirun <= 200000) {
		jiangjin = jiangjin1 + (lirun - 100000) * 0.075;
	}
	else if (lirun <= 400000) {
		jiangjin = jiangjin2 + (lirun - 200000) * 0.05;
	}
	else if (lirun <= 600000) {
		jiangjin = jiangjin4 + (lirun - 400000) * 0.03;
	}
	else if (lirun <= 1000000) {
		jiangjin = jiangjin6 + (lirun - 600000) * 0.015;
	}
	else if (lirun > 100) {
		jiangjin = jiangjin10 + (lirun - 1000000) * 0.01;
	}
	//输出
	printf("获得%f\n", jiangjin);
	return 0;
}