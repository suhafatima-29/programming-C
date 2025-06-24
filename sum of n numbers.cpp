#include<stdio.h>
int main(){
	int n,sum=0;
	printf("enter n: ");
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
	{
		sum+=i;
	}
		printf("the sum is %d \n",sum);//write this block out of for loop
	return 0;
}
