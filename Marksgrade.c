#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	printf("Enter your marks to know your grade\n");
	scanf("%d",&n);
	if( n >= 85)
	{
		printf("Grade A");
	}
	else if( n >= 70)
	{
		printf("Grade B");
	}
	else if( n >= 55)
	{
		printf("Grade C");
	}
	else if( n >= 40)
	{
		printf("Grade D");
	}
	else
	{
		printf("Grade F");
	}
}
