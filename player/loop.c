#include <stdio.h>
int main(void) 
{
	int i,b=0,c=0;
	for(i=0;i<4;i++)
	{
	b+=(9*pow(10,i));
	c+=b;
	}
	printf("%d",c);
}
