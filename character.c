#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
/*{
	char ch;
	printf("enter any character: ");
	scanf("%c",&ch);
	printf("\nascii value for %c is %d",ch,ch);
	
	if((ch>=65)&&(ch<=90))
	{
		printf("\nthe character is caapital",ch);
	}
	else if((ch>=97)&&(ch<=122))
	{
		printf("\nthe character is small",ch);
		
	}
	else if((ch>=48)&&(ch<=57))
	{
		printf("\nthe character is number",ch);
		
	}
	else{
		printf("\nerror...",ch);
	}
	
	return 0;
}*/


{
	int a,b,c;
	printf("Enter any three no.: ");
	scanf("%d%d%d",&a,&b,&c);
	
	if((a>b)&&(a>c))
	{
		printf("%d is greater",a);
	}
	else if((b>a)&&(b>c))
	{
		printf("%d is greater",b);
	}
	else if ((c>a)&&(c>b))
	{
		printf("%d is greater",c);
	}
    else if((a==b)&&(b>c))
    {
    	printf("%d and %d is same and greater than %d",a,b,c);
	}
    else if ((a==c)&&(a>b))
    {
    	printf("%d and %d is same and greater than %d",a,c,b);
	}
	 else if ((b==c)&&(b>a))
    {
    	printf("%d and %d is same and greater than %d",b,c,a);
	}
	else {
		printf("all are same");
	}
}
