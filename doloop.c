#include <stdio.h>
int main()
{
	int n,i;
	printf("enter number:");
	scanf("%d",&n);
	i=1;

	do {
		print("%d * %d = %d ",n,i,n*i);
		i++;
	} while (i <10);

	return 0;
}
