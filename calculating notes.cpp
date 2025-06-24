#include<stdio.h>
int main(){
	int amount;
	int note500,note200,note100,note50,note20,note10,note5,note2,note1;
	note500=note200=note100=note50=note20=note10=note5=note2=note1=0;//initializing or assigning these values to zero
	
	printf("enter amount: ");
	scanf("%d",&amount);
	
	if(amount>=500)
	{
	note500=amount/500;
	amount-=note500*500;
    }
    if(amount>=200)
	{
	note200=amount/200;
	amount-=note200*200;
    }
    if(amount>=100)
	{
	note100=amount/100;
	amount-=note100*100;
    }
    if(amount>=50)
	{
	note50=amount/50;
	amount-=note50*50;
    }
    if(amount>=20)
	{
	note20=amount/20;
	amount-=note20*20;
    }
    if(amount>=10)
	{
	note10=amount/10;
	amount-=note10*10;
    }
    if(amount>=5)
	{
	note5=amount/5;
	amount-=note5*5;
    }
    if(amount>=2)
	{
	note2=amount/2;
	amount-=note2*2;
    }
    if(amount>=1)
	{
	note1=amount;
    }
    printf("total number of notes= \n");
    printf("500 note=%d\n",note500);
    printf("200 note=%d\n",note200);
    printf("100 note=%d\n",note100);
    printf("50 note=%d\n",note50);
    printf("20 note=%d\n",note20);
    printf("10 note=%d\n",note10);
    printf("5 note=%d\n",note5);
    printf("2 note=%d\n",note2);  
	 printf("1 note=%d\n",note1);  
	 return 0;
}
