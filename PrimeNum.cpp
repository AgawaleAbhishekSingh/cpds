#include<stdio.h>
#include<conio.h>
int main()
{
int i, j, n, tot=0;
//clrscr();
printf("Enter n value to print prime no.s upto n\n");
scanf("%d",&n);
printf("Prime numbers between 1 to %d are:\n", n);
for(i=2; i<=n; i++)
{
for(j=2; j<i;j++)
{
if(i%j == 0)
break;
}
if(i==j)
{
tot+=1;
printf("%d\t", i);
}
}
printf("\nThere are %d no. of primes b/w 1 and %d", tot, n);
getch();
}

