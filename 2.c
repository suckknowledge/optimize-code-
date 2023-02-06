#include<stdio.h>
int NumberOf1(int n)//如果不加无符号整形，当n为负值时程序将出错。
{
	int count = 0;
	int i = 0;
	for (i = 0;i < 32;i++);
	{
		if (((n >> i) & 1) == 1)//补码右移后和000。。。。。01相与，如果是1就加一
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