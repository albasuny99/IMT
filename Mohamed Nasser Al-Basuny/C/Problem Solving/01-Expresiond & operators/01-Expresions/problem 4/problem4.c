/////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////// Author      : Mohamed Nasser Al-Basuny	   //////////////////////////////
//////////////////// Descriotion	: C pool Problem 4                ////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
void main (void)
{
	int num1,num2;
	
	
	printf("Enter Frinst Number : ");
	scanf("%d",&num1);
	printf("Enter Secound Number : ");
	scanf("%d",&num2);
	
	num1 = num1+num2 ;
	num2 = num1-num2 ;
	num1 = num1-num2 ;
	
	printf(" ......After swapping...... \n");
	printf("Number 1 = %d\n",num1);
	printf("Number 2 = %d\n",num2);
}