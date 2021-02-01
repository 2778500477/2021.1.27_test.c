#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
////	质数一定不是偶数，所以先把偶数剔除
////	除了2以外，所有的质因数也一定不是偶数
////	然后进行试除
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <=200; i += 2)
//	{
//		int j = 0;
//		for (j = 2; j < i/2; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//
//		}
//		if (j == i/2)
//		{
//			
//			count++;
//
//			printf("%d\n", i);
//
//		}
//	}
//	printf("\ncount=%d\n", count);//打印质数个数
//
//	return 0;
//}