#include<stdio.h>
#include<conio.h>
int main()
{
int a[50], n, i, large, small;
printf("Enter how many integers you want to enter\n");
scanf("%d",&n);
printf("Now enter the elements:\n");
for(i = 0; i < n; i++)
{
scanf("%d",&a[i]);
}
large = a[0]; small = a[0];
for(i = 0; i < n; i++)
{
if(a[i]<small)
small = a[i];
if(a[i]>large)
large = a[i];
}
printf("Largest in the given list of integers is : %d\n", large);
printf("smallest in the given list of integers is : %d", small);
getch();
}
