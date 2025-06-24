#include<stdio.h>
int main(){
	char ch;
	printf("enter a character:");//IF ELSE LADDER
	scanf(" %c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
	printf("character entered is a small letter vowel");
	}
	else if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
	printf("character entered is a capital letter vowel");
	}
	else if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
	printf("character entered is a consonant");
	else
	{
	printf("enetered letter is invalid");
	}
	return 0;
}
