#include<stdio.h>
int main(){
	int i,j;
	for(i=1;i<=3;i++)//nested for loops.
	{
		printf("\n%d\n",i);
		for(j=1;j<=3;j++)
		{
		printf("%d ",j);
		}
	}
	printf(" \n%d %d",i,j);
	
	return 0;
}
