#include<stdio.h>
#include<conio.h>
int prime(int n, int c);
void main()
{
	int no,result;
	printf("Enter a number:");
	scanf("%d",&no);
	if(no == 1)
	printf("%d is a prime no",no);
	result = prime(no, no/2);
	if(result == 0)
	{
		printf("%d is a prime number",no);
	}
	else
	{
		printf("%d is not a prime number",no);
	}
	getch();
}
int prime(int n, int c)
{
    if (c == 1)
	{
		return 0;
	}
    else
    {
 	    if(n%c == 0)
		{
			return 1;
		}
 	    else
 	    {
 	    	return prime(n , c-1);
		}
	    
    }
}
