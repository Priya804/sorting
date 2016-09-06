#include<conio.h>
#include<stdio.h>
#define max 100
void findno(int , int[]);
int main()
{
	int a[max],n,i;
	clrscr();
	printf("Enter the limit\n");
	scanf("%d",&n);
	printf("Enter the numbers\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	findno(n,a);
	getch();
	return;
}
void findno(int n, int a[])
{
	int k,i,j,x,y;
	printf("Enter the number to be checked\n");
	scanf("%d",&k);
	for(i=0;i<n-1;i++)
		for(j=(i+1);j<n;j++)
			if((a[i]+a[j])==k)
			{
				x=a[i];
				y=a[j];
				break;
			}
		printf("The numbers are %d + %d = %d",x,y,k);

}