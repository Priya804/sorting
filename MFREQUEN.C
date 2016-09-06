#include<conio.h>
#include<stdio.h>
#define max 100
void mfrequency(int [],int);
int main()
{
	int n,i,a[max];
	clrscr();
	printf("Enter the limit\n");
	scanf("%d",&n);
	printf("Enter the numbers\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	mfrequency(a,n);
	getch();
	return;
}
void mfrequency(int a[],int n)
{
	int b[max]={0},i,m=0;
	for(i=0;i<n;i++)
		b[a[i]]++;
	m=b[0];
	for(i=0;i<n;i++)
		if(b[i]>m)
			m=b[i];
	for(i=0;i<n;i++)
		if(b[i]==m)
		{
			printf("\n%d has maximum frequency",i);
			break;
		}
}
