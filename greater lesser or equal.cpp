#include<stdio.h>
int main(){
	int a,b;
	printf("enter a and b: ");
	scanf("%d%d",&a,&b);//nested if else
	if(a>=b)
	{
		if(a==b)
		{
			printf("a is equal to b");
		}
		else
		{
			printf("a is greater than b");
		}
	}
	else
	{
	printf("a is less than b");
	}
	return 0;
}
