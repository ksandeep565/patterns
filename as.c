#include<stdio.h>
void printasteriskpyramid(int rows)
{
	int i,j;
	for(i=0;i<=rows;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("$");
		}
		printf("\n");
	}
	for( i=rows-1;i>=0;i--)
	{
		for(j=0;j<=i;j++)
		{
		printf("*");
	}
}
	printf("\n");
}

int main()
{
int rows;
printf("enter the number of rows for the asterisk pyramid");
scanf("%d",&rows);
printasteriskpyramid(rows);
return 0;
}
