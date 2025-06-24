#include<stdio.h>
int main(){
	int units;//we have units in integer
	float bill,interest,totalbill;
	printf("enter the units:" );
	scanf("%d",&units);
	if(units<=50)
	{
		bill=(units*0.50);
		printf("the calculated bill is %.2f \n",bill);
	}
	else if(units<=100)
	{
		bill=(25+(units-50)*1.00);
		printf("the calculated bill is %.2f \n",bill);
	}
	else if(units<=150)
	{
		bill=(75+(units-100)*1.50);
		printf("the calculated bill is %.2f \n",bill);
	}
	else if(units<=200)
	{
		bill=(150+(units-150)*2.00);
		printf("the calculated bill is %.2f \n",bill);
	}
	else
	{
		bill=(250+(units-200)*2.50);
		printf("the calculated bill is %.2f \n",bill);
	}
	interest=30*bill;
	printf("the total interest is %.2f \n",interest);
	totalbill=bill+interest;
	printf("the total bill is %.2f \n",totalbill);
    return 0;	
}

