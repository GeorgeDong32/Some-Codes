/*
Code Information
  <���֤У��>
  Written by George��Dong
  Code Version 2.1 Final 
  
Bug List
  There is no bugs! 
*/ 

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int sti(char n);
int checkend (char a); 

int main()
{
	//������ 
	char id[18];
	int check[] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};   //У��ֵ���� 
	int i = 0; int sum = 0; int flag = 0;
	int checkf = 0; int checkl = 0;          //ǰУ��ֵ�ͺ�У��ֵ 
	//������ 
	printf ("���������֤����:\n");
	scanf ("%s",id);
	//У������ 
	  //ǰʮ��λ����У��ֵ 
	for ( int i = 0; i < 17; i++) {
		int n = sti(id[i]) * check[i];
		sum += n;
	}
	checkf = sum % 11;
	  //ĩβУ��ֵ
	checkl = checkend(id[17]);
	  //��У��ֵ�˶�
	if (checkf == checkl) flag = 1;
	else flag = 0; 
	//����� 
	if (flag == 1) printf ("ͨ��У��,��ݺϷ�\n");
	else printf ("δͨ��У�飬����\n"); 
	return 0;
}

int checkend (char a)
{
	switch (a)
	{
		case '1':
			return 0;
		case '0':
			return 1;
		case 'X':
			return 2;
		case '9':
			return 3;
		case '8':
			return 4;
		case '7':
			return 5;
		case '6':
			return 6;
		case '5':
			return 7;
		case '4':
			return 8;
		case '3':
			return 9;
		case '2':
			return 10;
	}
}

int sti(char n)
{
	switch(n)
	{
		case '1':
			return 1;
		case '2':
			return 2;
		case '3':
			return 3;
		case '4':
			return 4;
		case '5':
			return 5;
		case '6':
			return 6;
		case '7':
			return 7;
		case '8':
			return 8;
		case '9':
			return 9;
		case 'X':
			return 10;
		case '0':
			return 0;
	}
}
