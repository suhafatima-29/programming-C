#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    float d,r1,r2,rp,ip;
    printf("enter a,b,c: ");
    scanf("%d%d%d",&a,&b,&c);
    d=sqrt((b*b)-(4*a*c));
    
    if(d>0)
    {
    	r1=(-b+d)/(2*a);
    	r2=(-b-d)/(2*a);
    	printf("the roots are real and distinct:%.2f and %.2f",r1,r2);
	}
	else if(d==0)
	{
		r1=r2=-b/(2*a);
		printf("the roots are equal:%.2f and %.2f",r1,r2);
	}
    else if(d<0)
    {
    	rp=-b/(2*a);
    	ip=sqrt(-d)/(2*a);
    	printf("the roots are imaginary and they are %.2f+%.2fi and %.2f-%.2fi",rp,ip,rp,ip);
	}
	return 0;
}
