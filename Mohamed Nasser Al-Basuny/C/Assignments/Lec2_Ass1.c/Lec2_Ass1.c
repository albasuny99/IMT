/////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////// Author      : Mohamed Nasser Al-Basuny	   //////////////////////////////
////////////////////// date			: 16/7/2022						/////////////////////////////
///////////////////// Version       : 1.0 V							 ////////////////////////////
//////////////////// Descriotion	:  ask the user to enter 10		  ///////////////////////////
///////////////////                    numbers then ask him to 		   //////////////////////////
//////////////////				       enter another number to search   /////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
void main(void)
{
	int number1;
	int number2;
	int number3;
	int number4;
	int number5;
	int number6;
	int number7;
	int number8;
	int number9;
	int number10;
	int x;
	int counter=0;
	
	
	printf ("Enter Number 1");
	scanf("%d",&number1);
	printf ("Enter Number 2");
	scanf("%d",&number2);
	printf ("Enter Number 3");
	scanf("%d",&number3);
	printf ("Enter Number 4");
	scanf("%d",&number4);
	printf ("Enter Number 5");
	scanf("%d",&number5);
	printf ("Enter Number 6");
	scanf("%d",&number6);
	printf ("Enter Number 7");
	scanf("%d",&number7);
	printf ("Enter Number 8");
	scanf("%d",&number8);
	printf ("Enter Number 9");
	scanf("%d",&number9);
	printf ("Enter Number 10");
	scanf("%d",&number10);
	
	printf ("Enter The Value to search");
	scanf("%d",&x);
	
	if (x==number1)
	{
		printf ("vlue is exsust number 1");
		counter=1;
	}
	
	else if (x==number2)
	{
		printf ("vlue is exsust number 2");
		counter=1;
	}
	else if (x==number3)
	{
		printf ("vlue is exsust number 3");
		counter=1;
	}
	else if (x==number4)
	{
		printf ("vlue is exsust number 4");
		counter=1;
	}
	else if (x==number5)
	{
		printf ("vlue is exsust number 5");
		counter=1;
	}
	else if (x==number6)
	{
		printf ("vlue is exsust number 6");
		counter=1;
	}
	else if (x==number7)
	{
		printf ("vlue is exsust number 7");
		counter=1;
	}
	else if (x==number8)
	{
		printf ("vlue is exsust number 8");
		counter=1;
	}
	else if (x==number9)
	{
		printf ("vlue is exsust number 9");
		counter=1;
	}
	else if (x==number10)
	{
		printf ("vlue is exsust number 10");
		counter=1;
	}
	else{
		printf ("vlue is not exsust");
	}
	
	
}