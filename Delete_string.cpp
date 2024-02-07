#include<stdio.h>
#include<conio.h>
#include<string.h>
void trim(char *, int, int);
int main()
{
int n, pos;
char str[100]="";
printf("Enter the string:\n");
gets(str);
printf("Enter the position from where you want to delete characters:\n");
scanf("%d", &pos);
printf("Enter the no. of characters you want to delete:\n");
scanf("%d", &n);
trim(str, pos, n);
getch();
}
void trim( char str[100], int pos, int n)
{
int i, l;
l = strlen(str);
for(i =pos-1; i<l; i++)
{
str[i] = str[n+pos-1];
pos++;
}
str[i]='\0';
printf("String after deletion:\n%s", str);
return;
}
