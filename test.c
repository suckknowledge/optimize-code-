#include<stdio.h>
int NumberOf1(unsigned int n)//如果不加无符号整形，当n为负值时程序将出错。
{
	int count = 0;
	while (n)
	{
		if (n % 2 == 1)
		{
			count++;
		}
		n / 2;//二进制除以2，相等于整体n>>1
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