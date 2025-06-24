#include<stdio.h>
int main(){
	char name[20];//store upto 20 letters
	int m1,m2,m3,m4,sum,per;
	printf("enter the name of the student: ");
	scanf("%s",name);
	printf("enter the marks,m1,m2,m3,m4");
	scanf("%d%d%d%d",&m1,&m2,&m3,&m4);
	sum=m1+m2+m3+m4;
	per=(sum*100)/400;
	printf("percentage is %d \n",per);
	if(per>50)
	{
		printf("student is passed");
	}
	else
	{
		printf("student is failed");
	}
	return 0;
	}
