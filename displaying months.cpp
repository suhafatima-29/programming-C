#include<stdio.h>

int main(){
    int month;

    printf("Enter month number: ");
    scanf("%d",&month);

    if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
	{
        printf("This month has 31 days.\n");
    }
    else if(month==4||month==6||month==9||month==11) 
	{
        printf("This month has 30 days.\n");
    }
    else if(month==2) 
	{
        printf("February has 28 or 29 days (leap year).\n");
    }
    else 
	{
        printf("Invalid month number! Please enter 1 to 12.\n");
    }

    return 0;
}
