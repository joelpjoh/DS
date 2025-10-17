#include<stdio.h>
#include<conio.h>
int a[10][10],visited[10];
void bfs(int);
void main()
{
int i,j,n;
printf("enter the no. of vertices");
scanf("%d",&n);
printf("enter the graph elements in the matrix form");
for(i=0;i<=n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}

