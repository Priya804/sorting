#include<conio.h>
#include<stdio.h>
#define max 100
void equation(int [],int);
int main()
{
	int a[max],i,n;
	clrscr();
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	equation(a,n);
	getch();
	return;
}
void equation(int a[],int n)
{
	int i,j,k,p,q,r;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				p=a[i]*a[i];
				q=a[j]*a[j];
				r=a[k]*a[k];
				if((p+q)==r)
				{
					printf("%d %d %d",i,j,k);
					break;
				}
			}
		}
	}
}