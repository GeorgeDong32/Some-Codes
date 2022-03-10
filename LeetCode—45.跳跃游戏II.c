/*
Code Information
  <��̬�滮��ϰ> for leetCode
  Written by George��Dong
  Code Version 1.0 Beta
*/

//ͷ�ļ���
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//������
//��Ծ��ϷII
#include <math.h>
int jump(int* nums, int numsSize) 
{
	int s = 0; 
	int mp = 0; 
	int limit = 0;
	for (int i = 0; i < numsSize - 1; i++)
	{
		if (mp >= i) 
		{
			mp = fmax(mp, (i + *(nums + i)));
			if (i == limit)
			{
				limit = mp;
				s++;
			}
		}
	}
	return s;
}

//����������������������
int main(void)
{
	//Ĭ��������
	int NOT = 0;
	printf("�������������");
	scanf("%d", &NOT);
	//����������
	while (NOT)
	{
		printf("���������:\n");
		int step[110] = { 1,1 };
		int sl = 0;
		scanf("%d", &sl);
		for (int i = 0; i < sl; i++)
		{
			scanf("%d", &step[i]);
		}
		printf("%d\n", jump(step,sl));
		NOT--;
	}
	return 0;
}