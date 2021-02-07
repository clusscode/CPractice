#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void menu()
{
	printf("*****************************\n");
	printf("****1、Add         2、Sub****\n");
	printf("****3、Mul         4、Div****\n");
	printf("****      0、eixt        ****\n");
	printf("*****************************\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
////常规方法
//int main()
//{
//	int input;
//	int x;
//	int y;
//	do
//	{
//		menu();
//		printf("请输入你要选择的算法:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//            printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y); 
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("非法选项，请重新输入!\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//函数指针数组方法
//int main()
//{
//	int input;
//	int x;
//	int y;
//	int (*pf[5])(int, int) = { 0,Add,Sub,Mul,Div };
//	do
//	{
//		menu();
//		printf("请输入你要选择的算法:>");
//		scanf("%d", &input);
//		if (input != 0)
//		{
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", pf[input](x, y));
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//			break;
//		}
//		else
//			printf("非法选择，请重新输入!\n");
//	} while (input);
//	return 0;
//}


//回调函数法
int Die(int(*pf)(int, int))
{
	int x;
	int y;
	printf("请输入两个操作数:>");
	scanf("%d%d", &x, &y);
	printf("%d\n", pf(x, y));

}
int main()
{
	int input;
	int x;
	int y;
	do
	{
		menu();
		printf("请输入你要选择的算法:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Die(Add);
			break;
		case 2:
			Die(Sub);
			break;
		case 3:
			Die(Mul);
			break;
		case 4:
			Die(Div);
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("非法选项，请重新输入!\n");
			break;
		}
	} while (input);
	return 0;
}