#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,m;
	for(i=1;i<=6;i++)
	{
		m=0;
		for(j=1;j<=2*i;j++)
		{
			if(m%2==0)
			{
				printf("0");
			}
			else
			{
				printf("1");
			}
			m=m+1;
			
		}
		printf("\n");
		
	}
}
