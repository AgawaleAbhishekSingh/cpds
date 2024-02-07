#include<stdio.h>
#include<conio.h>
void TOH(int, char, char, char);
int main()
{
int n;
char first_rod = 'A', second_rod = 'B', third_rod = 'c';
printf("Enter number of disks : ");
scanf("%d",&n);
TOH(n, first_rod, second_rod, third_rod);
getch();
return 0;
}
void TOH(int disk, char a, char b, char c){
if(disk == 1)
printf("Move disk %d from %c rod to %c rod\n", disk, a, c);
else{
TOH(disk-1,a,c,b);
printf("Move disk %d from %c rod to %c rod\n", disk, a, c);
TOH(disk-1,b,a,c);
}
}
