#include<stdio.h>
int NumberOf1(int n)//这种方法n可以为负值
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
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