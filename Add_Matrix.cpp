#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int i, j;
int **getmatrix(int row, int col, char);
int **addmatrix(int **, int**, int, int);
void freememory(int** m, int row);
int main()
{
int **a,**b,**c,r1,c1,r2,c2;
printf("Enter no. of rows and cols of first matrix:\n");
scanf("%d%d",&r1,&c1);
printf("Enter no. of rows and cols of second matrix:\n");
scanf("%d%d",&r2,&c2);
while(r1!=r2 || c1!=c2)
{
printf("The entered order of matrices are not compatible for addition\n");
printf("Please enter compatible order, i.e., r1=r2 and c1=c2\n");
printf("Enter no. of rows and cols of first matrix:\n");
scanf("%d%d",&r1,&c1);
printf("Enter no. of rows and cols of second matrix:\n");
scanf("%d%d",&r2,&c2);
} 
a = getmatrix(r1,c1,'A');
b = getmatrix(r2,c2,'B');
c = addmatrix(a,b,r1,c1);
printf("The addition of given two matrices is:\n");
for(i=0; i<r1; i++)
{
for(j=0; j<c1; j++)
{
printf("%d ",c[i][j]);
}
printf("\n");
}
freememory(a,r1);
freememory(b,r2);
freememory(c,r1);
getch();
}
int **getmatrix(int row, int col, char s)
{
int **m;
m = (int**)malloc(row * sizeof(int*));
for(i = 0; i<row; i++){
m[i] = (int*)malloc(col * sizeof(int));
}
printf("Enter elements of \"%c\" Matrix:\n", s);
for(i=0; i<row; i++){
for(j=0; j<col; j++){
printf("%c[%d][%d] = ",s, i, j);
scanf("%d", &m[i][j]);
}
}
return m;
}
void freememory(int **m, int row)
{
for(i=0; i<row; i++){
free(m[i]);
}
free(m);
}
int **addmatrix(int** a, int** b, int row, int col)
{
int **add;
add = (int**)malloc(row * sizeof(int*));
for(i=0; i<row; i++)
add[i] = (int*)malloc(col * sizeof(int));
for(i=0; i<row; i++){
for(j=0; j<col; j++){
add[i][j] = a[i][j] + b[i][j];
}
}
return add;
}
