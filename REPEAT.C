#include<conio.h>
#include<stdio.h>
#define max 100
int main()
{
	int a[max],i,n,c=0,b=0,p;
	clrscr();
	printf("Enter the limit\n");
	scanf("%d",&n);
	printf("Enter the numbers\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]>0 && a[i]!=p)
			a[a[i]]*=-1;
		else if(a[i]==0)
		{
			a[a[i]]=p;
			b++;
		}
		else if(a[i]<0 || a[i]==p)
		{
			c++;
			printf("Yes");
			break;
		}
	}
	if(c==1 && b==1)
		printf("No");
	else if(c>1 || b>1)
		printf("Yes");
	getch();
	return 0;
}