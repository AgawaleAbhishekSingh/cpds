 
#include<stdio.h>
#include<conio.h> 
int main()
{
int fac[1000] = {0}, size, i, j, n, prod, carry;
//clrscr();
fac[0] = 1;
size = 1;
printf("Enter a number to find it's factorial:\n");
scanf("%d", &n);
for(i=2; i<=n; i++)
{
carry = 0;
for(j=0; j<size; j++)
{
prod = fac[j] * i + carry;
fac[j] = prod % 10;
carry = prod / 10;
}
while(carry > 0)
{
fac[size] = carry % 10;
carry = carry / 10;
size++;
}
}
printf("No. of digits in %d factorial is %d\n", n, size);
printf("\nThe factorial of given number is :\n");
for(i = size-1; i>=0; i--)
{
printf("%d", fac[i]);
}
getch();
}
