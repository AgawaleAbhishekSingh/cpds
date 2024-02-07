#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int a, b, c, delta;
float x1,x2;

printf("Enter a,b,c values of the quadratic eqation\n");
scanf("%d%d%d", &a, &b, &c);
delta=(b*b)-(4*a*c);
if(a==0&&b==0&&c==0)
{
printf("Invalid quadratic equation\n");
getch();
return 0;
}
if(delta == 0)
{
printf("The roots are equal\nThey are\t");
x1=-(b/(2*a));
printf("%3.2f\t%3.2f",x1,x1);
}
if(delta > 0)
{
if(a==0)
{
printf("Divide error given a = 0\n");
}
else
{
printf("The roots are real and distinct\nThey are\t");
x1=(-b+sqrt(delta))/(2*a);
x2=(-b-sqrt(delta))/(2*a);
printf("%3.2f\t%3.2f",x1,x2);
}
}
if(delta < 0)
{
printf("The roots are imaginary");
}
getch();
}
