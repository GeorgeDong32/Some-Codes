#include <stdio.h>
#include <math.h>

int main() 
{
	int n = 0;
	scanf ("%d", &n);
	int a = (( n + 1) / 2);		//aΪ����ֵ 
	// iΪ������jΪ���� 
	for (int i = 1; i <= n; i++) {
		for (int j = 1 ; j <= n ; j++){
			if ( i < a) {
				if ( i == j) printf("1");
		 		else if ( j == (( n + 1) / 2)) printf ("2"); 
				else if (( i + j ) == ( n + 1)) printf ("3");
				else printf (" ");
			}
			if ( i == a) {
				if ( i == j) printf("9");
		 		else if ( j < a ) printf ("8"); 
				else if ( j > a) printf ("4");
				else printf (" ");
			}
			if ( i > a) {
				if ( i == j) printf("5");
		 		else if ( j == (( n + 1) / 2)) printf ("6"); 
				else if (( i + j ) == ( n + 1)) printf ("7");
				else printf (" ");
			}
		}
	printf ("\n");
	} 
	
}
	

