/////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////// Author      : Mohamed Nasser Al-Basuny	   //////////////////////////////
////////////////////// date			: 16/7/2022						/////////////////////////////
///////////////////// Version       : 1.0 V							 ////////////////////////////
//////////////////// Descriotion	:  ask the user to enter 10		  ///////////////////////////
///////////////////                    numbers then ask him to 		   //////////////////////////
//////////////////				       enter another number to search   /////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
void main (void)
{
	int num1,num2,num3;
	
	
	printf("Enter Frist Number");
	scanf("%d",&num1);
	printf("Enter Second Number");
	scanf("%d",&num2);
	printf("Enter Third Number");
	scanf("%d",&num3);
	
	
	if(num1>num2)
	{
		if (num1>num3)
		{
			printf("Biger Number is : %d",num1);
		}
		else
		{
			printf("Biger Number is : %d",num3);
			
		}
	}
	else 
	{
		if (num2>num3)
		{
			printf("Biger Number is : %d",num2);
		}
		else
		{
			printf("Biger Number is : %d",num3);
			
		}
	}
}