#include<stdio.h>
#include<conio.h>

int main()
{
	int n , i ,first = 0, second =1 ,third;
	printf("Ente how many numbers of fibonacci series you want : ");
	scanf("%d",&n);
	if(n<=0)
	{
		printf("Invalid Entry!!!");
		getch();
		return 0;
	}
	printf("The series is:\n");
	if(n==1)
		printf("%d",first);
	if(n==2)
		printf("%d\t%d",first, second);
		
	if(n>2)
	{
		printf("%d\t%d\t",first, second);
		for(i=0;i<n-2;i++)
		{
			third = first + second;
			first = second;
			second = third;
			printf("%d\t",third);
		}
	}
	getch();
	return 0;
	
}
