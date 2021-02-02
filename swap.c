#include<stdio.h>
#include<conio.h>
void main()
{
	// Declaration of variable
	int a, b;
	printf ("Enter two numbers:\n");
	
	// asking for input
	scanf ("%d %d",&a,&b);
	
	// displaying no before swap
	printf("The first no is %d and second no is %d\n",a ,b);
	
	// logic of swapping no without temporary variable
	a = a + b;
	b = a - b;
	a = a - b;
	
	//displaying result after swap
	printf("After swapping:-\n");
	printf("The first no is %d and second no is %d",a ,b);
	getch();
}
