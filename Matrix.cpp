#include<stdio.h>
int main()
{
	int a[10][10],r,c;
	printf("Enter the rows and columns:\n");
	scanf("%d%d",&r,&c);
	printf("\nEnter matrix element:\n");
	for(int i=0;i<r;++i)
	for(int j=0;i<c;++j)
	{
		printf("Enter element a%d%d:",i+1,j+1);
		scanf("%d",&a[i][j]);
			}
	printf("\nEntered matrix:\n");
	for(int i=0;i<r;++i)
	for(int j=0;j<c;++j)
	{
		printf("%d",a[i][j]);
		if(j==c-1)
		printf("\n");
	}
	printf("\n");
	return 0;
	}
	
