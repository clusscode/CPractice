#define _CRT_SECURE_NO_WARNINGS 1
//��Ŀ����ҵ���ŵĽ������������ɡ�
//
//����(I)���ڻ����10��Ԫʱ���������10% ��
//�������10��Ԫ������20��Ԫʱ������10��Ԫ�Ĳ��ְ�10% ��ɣ�����10��Ԫ�Ĳ��֣������7.5 % ��
//20��40��֮��ʱ������20��Ԫ�Ĳ��֣������5 % ��
//40��60��֮��ʱ����40��Ԫ�Ĳ��֣������3 % ��
//60��100��֮��ʱ������60��Ԫ�Ĳ��֣������1.5 % ��
//����100��Ԫʱ������100��Ԫ�Ĳ��ְ�1 % ��ɡ�
//
//�Ӽ������뵱������I����Ӧ���Ž���������
#include<stdio.h>
int main()
{
	double lirun = 0;
	double jiangjin1 ,jiangjin2,jiangjin4,jiangjin6,jiangjin10,jiangjin;
	scanf("%lf", &lirun);
	//����ûһ���׶���ֵʱ���ܵõ��Ľ���Ϊ��һ�׶ε��ۼӼ򻯼�����׼����
	jiangjin1 = 100000 * 0.1; 
	jiangjin2 = jiangjin1 + 100000 * 0.075;
	jiangjin4 = jiangjin2 + 200000 * 0.05;
	jiangjin6 = jiangjin4 + 200000 * 0.03;
	jiangjin10 = jiangjin6 + 400000 * 0.015;
	//��if/elseѡ���������ʾ����Ļ�ú�������ٵĹ�ϵ
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
	//���
	printf("���%f\n", jiangjin);
	return 0;
}