/////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////// Author      : Mohamed Nasser Al-Basuny	   //////////////////////////////
////////////////////// date			: 23/7/2022						/////////////////////////////
///////////////////// Version       : 1.0 V							 ////////////////////////////
//////////////////// Descriotion	:  Lecture 4 lab 1		             ////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////

//summtion
#include <stdio.h>
int ADD (int x ,int y);
int git_max (int x, int y);
void Hello_Massege(void);

void main(void)
{
	int num1=0;
	int num2=0;
	int result=0;
	
	Hello_Massege(void);
	printf("Enter Frist Number : ");
	scanf("%d",&num1);
	printf("Enter Frist Number : ");
	scanf("%d",&num2);
	result=ADD(num1,num1);
	
	printf("the summtion = %d",result);
}
//implemtation
int ADD (int x ,int y)
{
	int sum = x + y ;
	return sum ;
	
}

int git_max (int x, int y)
{
	int max =x>y? x:y;
	return max;
}
void Hello_Massege (void)
{
	printf("Hello \n");
}
