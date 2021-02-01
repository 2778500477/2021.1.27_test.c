#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	//sqrt()开平方
//	//如果一个数i可以写成：i=a*b；那么a和b中一定有一个数<=sqrt(i);
//	//且素数一定不是偶数
//	int i = 0;
//	int count = 0;
//	for (i = 101; i < 201;i+=2)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j>sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}