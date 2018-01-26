#include <stdio.h>

int main() 
{
	int a =2147483647;
	int j = 0 ,k = 0,l = 0;
	int *p;
	long int d = (long)a * (long)a;
	float f = 4.67;
	int e = 4;
	int c = (int)f + e;
	p=&a;
	*p = 400;
	p++;
	*p =5555;

	//printf("a = %p, d = %ld, f = %f, e = %d, c = %d \n",a,d,f,e,c);
	printf(" a = %d, p = %p, j = %d, k = %d, l = %d", a,p,j,k,l);
	return 0;

}

