#include<stdio.h>
#include<conio.h>
int main()
{
int n1,n2;
//clrscr();
printf("Enter two numbers to find gcd\n");
scanf("%d%d",&n1,&n2);
(n1<0)?(n1 = -n1):(n1 = n1);
(n2<0)?(n2 = -n2):(n2 = n2);
while(1){
if(n1 == n2){
printf("Gcd is %d\n",n1);
break;
}
if(n1 > n2){
n1 = n1 - n2;
}
if(n1 < n2){
n2 = n2 - n1;
}
}
printf("Done");
getch();
}
