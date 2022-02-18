#include<stdio.h>
int sum(int);
int main()
{
	int i,n;
	printf("Enter the number = ");
	scanf("%d",&n);
	printf("Sum of digits = %d ",sum(n));
}
int sum(int n)
{
	if(n==0)
	{
		return 0;
    }
	else
	{
		return(sum(n/10)+n%10);
	}
}
