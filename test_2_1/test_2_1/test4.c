#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	//1��ȥ����
	//����2�����������,���ܱ�2����������Ϊ0
	//����3���������������3�ı�����Ϊ0
	//����5���������������5�ı�����Ϊ0
	//....
	
	//�ø����ϰ�iװ��������2��3����5...�ı�����Ϊ0��һֱ������ĩβ������0�ľ�������
	int i = 0;//arr�����±�
	int j = 0;
	int count = 0;
	int arr[100];
	for (i = 0; i < 100; i++)
	{
		arr[i] = i + 100;//��ʼ������Ԫ��

	}
	for (i = 0; i < 100; i++)
	{
		j = i;//����0,1,
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
