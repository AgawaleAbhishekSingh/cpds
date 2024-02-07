#include<stdio.h>
#include<conio.h>

int main()
{
	int n , digit, sum=0;
	printf("Enter a number to find sum of its digit: ");
	scanf("%d",&n);
	while(n>0)
	{
		digit = n%10;
		sum=sum+digit;
		n=n/10;
	}
	printf("Sum of digits of given number is '%d'",sum);
	getch();
	return 0;
}
