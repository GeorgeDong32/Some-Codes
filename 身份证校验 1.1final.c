#include <stdio.h>
#include <math.h> 
int main()
{
	int id[18];
	long long int c, d;
 	long long idn;
 	//���֤�Ŷ�ȡ��洢 
	printf ("���������֤����:\n");
	scanf ("%lld",&idn);
	c = idn;
	for ( int i = 0; i <= 17; i++ ){
		d = c % 10;
		id[i] = d;
		c /= 10;
	}            
	//���֤У��   
	int n = 0;              //У����תֵ
	int sum = 0;            //У��ֵ 
	int a[] = {1,2,4,8,5,10,9,7,3,6,1,2,4,8,5,10,9,7};
	for ( int j = 0; j <= 17; j++) {
		n = id[j] * a[j];
		sum += n;
	}
	//��� 
	if ( (sum % 11) == 1 ) printf ("ͨ��У��,��ݺϷ�\n");
	else printf ("δͨ��У�飬����\n"); 
	return 0;
	
}
