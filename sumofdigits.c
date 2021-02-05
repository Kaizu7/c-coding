#include<stdio.h>
#include<conio.h>
int sum(int n);
void main()
{
	int result,no;
	printf("Input number: ");
	scanf("%d",&no);
	result = sum(no);
	printf("Sum of digits: %d",result);
	getch();
}
int sum(int n)
{
	if (n == 0)
	{
		return 0;
	}

	return (n%10 + sum(n/10));
}
