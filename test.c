//题目：用户输入一个日期，打印出这个日期是这年的第几天
//程序思想：先用switch语句计算出平常年份的月的天数，然后在控制是否为闰年在确定是否加1
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int month, year, day, sum;
	printf("请输入日期，格式为：2021.1.18：");
	scanf("%d.%d.%d", &year, &month, &day);
	switch (month)
	{
	case 1: sum = 0; break;
	case 2: sum = 31; break;
	case 3: sum = 59; break;
	case 4: sum = 90; break;
	case 5: sum = 120; break;
	case 6: sum = 151; break;
	case 7: sum = 181; break;
	case 8: sum = 212; break;
	case 9: sum = 243; break;
	case 10: sum = 273; break;
	case 11: sum = 304; break;
	case 12: sum = 334; break;
	}
	sum = sum + day;
	//当为闰年且输入的月份大于二月时要加上一天
	if (year%400 == 0 && month > 2)
	{
		sum++;
	}
	else if (year % 4 == 0 && year % 100 != 0 && month > 2) {
		sum++;
	}
	printf("%d.%d.%d是今年的第%d天\n", year, month, day, sum);
	return 0;
	
}