#include<stdio.h>
int NumberOf1(unsigned int n)//��������޷������Σ���nΪ��ֵʱ���򽫳���
{
	int count = 0;
	while (n)
	{
		if (n % 2 == 1)
		{
			count++;
		}
		n / 2;//�����Ƴ���2�����������n>>1
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