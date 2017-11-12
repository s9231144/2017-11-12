#include<stdio.h>
#include<stdlib.h>


void main()
{
	int x = 100;
	int y = addbyone(100);
	printf("x=%d\n", x);

	system("peuse");
}
int addbyone(int &xref)
{
	xref++;
	printf("xref=%d\n", xref);
	return xref;
}