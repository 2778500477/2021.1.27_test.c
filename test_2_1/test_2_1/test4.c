#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	//1先去除，
	//先用2除它后面的数,把能被2整除的数置为0
	//再用3除他后面的数，把3的倍数置为0
	//再用5除他后面的数，把5的倍数置为0
	//....
	
	//用个集合把i装起来，将2，3，，5...的倍数置为0；一直到集合末尾；不是0的就是素数
	int i = 0;//arr数组下标
	int j = 0;
	int count = 0;
	int arr[100];
	for (i = 0; i < 100; i++)
	{
		arr[i] = i + 100;//初始化数组元素

	}
	for (i = 0; i < 100; i++)
	{
		j = i;//跳过0,1,
		while (j>1)
		{
			if (arr[i] % j == 0)
			{
				arr[i] = 0;
				
			}
			j = j - 1;
		}
	}
	for (j = 1; j < 100; j++)
	{
		if (arr[j] != 0)
		{
			count++;
			printf("%d\n", arr[j]);
		}
	}
	printf("count=%d\n", count);
	
	return 0;
}
