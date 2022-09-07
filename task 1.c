#include<stdio.h>
int main()
{
	int a,b,maximum;
	printf(" Enter any 2 numbers:");
	scanf("%d%d",&a,&b);
	if (a<b)
	{ 
	    maximum=b;
	}
	if (a>b)
	{ 
	    maximum=a;
	}
	printf(" The maximum value is %d",maximum);
	return 0;
}
