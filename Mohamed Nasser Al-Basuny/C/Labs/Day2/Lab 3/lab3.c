#include <stdio.h>
void main (void)
{
	/*Will creat 2 var to scan user password and store correct password */
	int number;
	int x,n=2;
	
	
	
	
	printf("Enter your Number");
	scanf("%d",&number);
	x=number%n;
	
	if  (x==1)
	{
		printf("odd");
	}
	
	
	
	else{
		printf("Even");
	}
	
	
}