#include<stdio.h>
int main()
{
	int a[10][10],n,r,c;
	scanf("%d",&n);
	printf("enter matrix\n");
	for(r=0;r<n;r++)
	{
		for(c=0;c<n;c++)
		scanf("%d",&a[r][c]);
	}
	for(r=0;r<n;r++)
	{
		for(c=0;c<n;c++)
		{
			if(r==c)
			printf("%d ",a[r][c]);
		}
	}
}
