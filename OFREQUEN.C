#include<conio.h>
#include<stdio.h>
#define max 100
void ofrequency(int [],int);
int main()
{
	int n,a[max],i;
	clrscr();
	printf("Enter the limit\n");
	scanf("%d",&n);
	printf("Enter the numbers\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	ofrequency(a,n);
	getch();
	return;
}
void ofrequency(int a[],int n)
{
	int i,s;
	for(i=0;i<n-1;i++)
	{
		a[i+1]=a[i]^a[i+1];
		s=a[i+1];
	}
	printf("%d has odd frequency",s);
}