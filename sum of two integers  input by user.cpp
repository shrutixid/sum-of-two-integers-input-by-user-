#include<stdio.h>
int main()
{
	int a,b,c;// variables of name 'a','b','c' has been declared of  integer data type
	printf("\nEnter first integer:- ");/*message to user to input two value of integer data type in variables 'a' and 'b' */
	scanf("%d",&a);
	printf("\nEnter second integer:- ");
	scanf("%d",&b);
	c=a+b;
	printf("%d + %d = %d",a,b,c);
}
