#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int n = 9;
	
	
	for (i = 1; i<=n; i++)
	{
		int j = 0;
		int ret = 1;
		
		for (j = 1; j <=i; j++)
		{
			ret = i*j;
			printf("%d*%d=%d\t", i, j, ret);
			if (i == j){
				printf(" \n");
			}

		}
		
	
	}
	return 0;
}