#include<stdio.h>

main()
{
	int a[]={1,3,5,7,9,11};
	int i;
	int *p1;
	p1=a;
	for(i=0;i<=5;i++)
	{
		printf("%u = %d\n",p1+i,*(p1+i));
	}
	printf("reverse array =\n");
	for(i=5;i>=0;i--)
	{
		printf("%u = %d\n",p1+i,*(p1+i));
	}
}
