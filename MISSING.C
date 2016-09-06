#include<conio.h>
#include<stdio.h>
#define max 100
void missing(int [],int);
int main()
{
	int n,a[max],i;
	clrscr();
	printf("Enter the limit\n");
	scanf("%d",&n);
	printf("enter the numbers\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	missing(a,n);
	getch();
	return;
}
void missing(int a[],int n)
{
	int i,asum=0,sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	asum=((n+1)*(n+2))/2;
	if(sum!=asum)
		asum=asum-sum;
	printf("Missing number is %d",asum);
}
