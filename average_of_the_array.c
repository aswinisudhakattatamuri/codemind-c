#include<stdio.h>
int main()
{
	int n,i,s,d;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	   s=s+a[i];
	}

	float avg;
	avg=(float)s/n;
	printf("%0.2f",avg);
}