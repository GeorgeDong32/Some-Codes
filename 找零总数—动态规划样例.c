/*
Code Information
  <��������> for Matrix
  Written by George��Dong Instructed by _single$hot
  Code Version 2.0 Beta
*/

/*��̬�滮����������
  �������ǽ��ݹ�Ľ������������
  ����ʵ�����Ǹ����������ֽ�һ����
*/

#include <stdio.h>

int bag[1010];   //���ɱ������ڴ������
int bill[8] = { 1,5,10,50,100,200,500,1000 };   //����ֽ�ҵ�����

#include <stdio.h>

int bag[1010];   //���ɱ������ڴ������
int bill[8] = { 1,5,10,50,100,200,500,1000 };   //����ֽ�ҵ�����

int main(void)
{
	//����������������
	int limit = 1000;  //�������ޣ��������Ʊ��������������������
	bag[0] = 1;
	for (int i = 0; i < 8; i++)   
	{
		for (int j = bill[i]; j < limit; j++)  //��������ֵ
		{
			bag[j] += bag[j - bill[i]];  //�ݹ�����/������
		}
	}
	double num = 0;
	while (scanf("%lf", &num) != EOF)
	{
		int p = 10 * num;
		printf("%d\n", bag[p]);
	}
	return 0;
}

//����վ
//Beta 1.0 ��ʱ
/*int main(void)
{
	int charge = 0;
	scanf("%d", &charge);
	int sum = charge * 10;
	int check = 0; int count = 0;
	for (int c1 = 0; c1 <= sum; c1++)   //1��
	{
		for (int c2 = 0; c2 <= sum / 5; c2++)  //5��
		{
			for (int c3 = 0; c3 <= sum / 10; c3++)  //1Ԫ
			{
				for (int c4 = 0; c4 <= sum / 50; c4++)  //5Ԫ
				{
					for (int c5 = 0; c5 <= sum / 100; c5++)  //10Ԫ
					{
						for (int c6 = 0; c6 <= sum / 200; c6++)  //20Ԫ
						{
							for (int c7 = 0; c7 <= sum / 500; c7++)  //50Ԫ
							{
								for (int c8 = 0; c8 <= sum / 1000; c8++)  //100Ԫ
								{
									check = c1 + 5 * c2 + 10 * c3 + c4 * 50 + c5 * 100 + c6 * 200 + c7 * 500 + c8 * 1000;
									if (check == sum) {
										count++;
										break;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	printf("%d", count);
	return 0;
}*/