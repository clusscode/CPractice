#define _CRT_SECURE_NO_WARNINGS 1
//题目：一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
/*程序分析：
1、设这个数为x，可得等式x + 100 = pow(n,2)，x + 100 + 168 = pow(m,2)
2、变换等式：pow(m,2) - pow(n,2) = 168，由它我们可得(m + n)(m - n) = 168
3、设(m - n) = i,(m + n) = j，这我们可知 m = (i + j) / 2 注：[(m - n)+(m + n)] = i + j，同理 n =(j - i) / 2
*/
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 1, m = 0, n = 0;
	int x = 0;//定义这个整数
	for (i = 1; i <= sqrt(168); i++)//因为i = (m - n),所以i会小于sqrt(168)
	{
		if (168 % i == 0)//因为i * j = 168，所以该语句通过判断168能否整除i来确定等式是否成立
		{
			n = (168 / i - i) / 2;
			m = (168 / i + i) / 2;
		}
		x = pow(n,2) - 100;//因为x + 100 = pow(n,2),所以可以求出x
		if (pow(m, 2) - pow(n, 2) == 168)//通过该语句剔除能被168整除的数
		{
			printf("x加上100所开出来的数为:%d\n", n);
			printf("x加上100再加168所开出来的数为:%d\n", m);
			printf("这个整数为%d\n", x);
			printf("\n");
		}
	}
	return 0;
}