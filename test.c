//C语言100 - 第1例
//题目：有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
//程序分析：可填在百位、十位、个位的数字都是1、2、3、4。组成所有的排列后再去掉不满足条件的排列。
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int ge, shi, bai;//定义百位，十位以及个位
	int sum = 0;//定义sum，用来记录有多少个满足条件的三位数
	//进行三重循环，组合出所有的三位数
	for (ge = 1; ge <= 4; ge++) {
		for (shi = 1; shi <= 4; shi++) {
			for (bai = 1; bai <= 4; bai++) {
				//if语句来选出满足条件的三位数
				if (ge != shi && ge != bai && shi != bai) {
					sum++;

					printf("%d%d%d\n", bai, shi, ge);
				}
			}
		}
	}				
	printf("1,2,3,4能组成%d个互不相同且无重复的三位数\n", sum);
	return 0;
}