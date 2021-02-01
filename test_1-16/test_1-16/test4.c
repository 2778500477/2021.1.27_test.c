#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	
	int k = 0;
	int a = 0;
	
	for (k = 100; k <= 200; k++)
	{
		int i = 0;
		for (i = 2; i <= k; i++)
		{
			if (k%i == 0)
			{
				break;
			}
			

		}
		if (i == k){
			a++;
			printf("%d\n", k);
		}
	}
	
	return 0;
}