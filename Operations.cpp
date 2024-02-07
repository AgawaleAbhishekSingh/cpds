#include<stdio.h>
#include<conio.h>
int main()
{
int a, b, c, n, res;
//while()
//{
printf("Enter any two integers to perform calculation\n");
scanf("%d%d",&a, &b);
printf("What operation do you want to perform\n");
printf("1 for ADDITION\n2 for SUBTRACTION\n3 for MULTIPLICATION\n4 for DIVISION\n");
scanf("%d", &c);
switch(c)
{
case 1:
res=a + b;
printf("\t%d + %d = %d\n", a, b, res);
break;
case 2:
res=a - b;
printf("\t%d - %d = %d\n", a, b, res);
res=b-a;
printf("\t%d - %d = %d\n", b, a, res);
break;
case 3:
res=a*b;
printf("\t%d x %d = %d\n", a, b, res);
break;
case 4:
printf("\t%d / %d =\n", a, b);
res=a/b;
printf("\t\t%d (Quotient)\n", res);
res=a%b;
printf("\t\t%d (Remainder)\n", res);
break;
default:
printf("\t\t\t\t!!!Invalid selection!!!\n");
}
printf("\tEnter (1) if you want to do another calculation or enter (0)\n");
scanf("%d",&n);
//}
}
