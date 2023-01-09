/////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////// Author      : Mohamed Nasser Al-Basuny	   //////////////////////////////
//////////////////// Descriotion	: C pool Problem 2                ////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void main (void)
{
	/* define integers*/
	int num1,num2,div,rem;
	
	/*ask user to input numbers*/
	printf("Enter Frist Number : ");
	scanf("%d",&num1);
	printf("Enter Secound Number : ");
	scanf("%d",&num2);
	
	div = num1/ num2 ;
	rem = num1 %num2;
	
	printf("Division of %d & %d= %d\n",num1,num2,div);
	printf("Reminder of %d & %d= %d\n",num1,num2,rem);
	
	
	
}



