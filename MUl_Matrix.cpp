//ii. Multiplication of Two Matrices.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int i, j, k;
int **getmatrix(int row, int col, char);
int **mulmatrix(int **, int**, int, int, int, int);
void freememory(int** m, int row);
int main()
{
int **a,**b,**c,r1,c1,r2,c2;
printf("Enter no. of rows and cols of first matrix:\n");
scanf("%d%d",&r1,&c1);
printf("Enter no. of rows and cols of second matrix:\n");
scanf("%d%d",&r2,&c2);
while(c1!=r2)
{
printf("The entered order of matries are not compatible for multiplication\n");
printf("Please enter compatible order, i.e., c1 = r2\n");
printf("Enter no. of rows and cols of first matrix:\n");
scanf("%d%d",&r1,&c1);
printf("Enter no. of rows and cols of second matrix:\n");
scanf("%d%d",&r2,&c2);
}
a = getmatrix(r1,c1,'A');
b = getmatrix(r2,c2,'B');
c = mulmatrix(a,b,r1,c1,r2,c2);
printf("The multiplication of given two matrices is:\n");
for(i=0; i<r1; i++)
{
for(j=0; j<c2; j++)
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
for(i = 0; i<row; i++)
{
m[i] = (int*)malloc(col * sizeof(int));
}
printf("Enter elements of \"%c\" Matrix:\n",s);
for(i=0; i<row; i++){
for(j=0; j<col; j++){
printf("%c[%d][%d] = ",s, i,j);
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
int **mulmatrix(int** a, int** b, int r1, int c1, int r2, int c2)
{
int **mul;
mul = (int**)malloc(r1 * sizeof(int*));
for(i=0; i<r1; i++)
mul[i] = (int*)malloc(c2 * sizeof(int));
for(i=0; i<r1; i++){
for(j=0; j<c2; j++){
mul[i][j]=0;
for(k=0; k<c1; k++){
mul[i][j]+=a[i][k] * b[k][j];
}
}
}
return mul;
}
