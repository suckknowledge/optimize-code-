#include<stdio.h>
int NumberOf1(int n)//��������޷������Σ���nΪ��ֵʱ���򽫳���
{
	int count = 0;
	int i = 0;
	for (i = 0;i < 32;i++);
	{
		if (((n >> i) & 1) == 1)//�������ƺ��000����������01���룬�����1�ͼ�һ
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int n = 15;
	int ret = NumberOf1(n);
	printf("ret=%d\n", ret);
	return 0;
}