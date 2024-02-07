#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
char s1[50], s2[50];
printf("Enter a string:\n");
scanf("%s",s1);
strcpy(s2, s1);
strrev(s2);
if(strcmp(s1, s2) == 0)
{
printf("The given string is palindrome");
}
else
{
printf("The given string is not palindrome");
}
getch();
}
