#include <stdio.h>
void main (void)
{
	/*Will creat 2 var to scan user password and store correct password */
	int password;
	int correct_password=1234;
	
	
	printf("Enter your Number");
	scanf("%d",&password);
	
	if  (password==correct_password)
	{
		printf("Welcome");
	}
	
	else{
		printf("incorrect");
	}
	
	
}