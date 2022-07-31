/////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////// Author      : Mohamed Nasser Al-Basuny	   //////////////////////////////
////////////////////// date			: 16/7/2022						/////////////////////////////
///////////////////// Version       : 1.0 V							 ////////////////////////////
//////////////////// Descriotion	:  Lecture 4 Assignment 2		 ////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int ADD (int x, int y);
int SUB (int x, int y);
int MULT (int x, int y);
int DIV (int x, int y);
int AND (int x, int y);
int OR (int x, int y);
int NOT (int x);
int XOR (int x, int y);
int REM (int x, int y);
int INC (int x);
int DEC (int x);


void main (void)
{
	int ID,num1,num2;
	
	printf("Enter the operation ID\n");
	
	printf("Add       >> 1\n");
	printf("Subtract  >> 2\n");
	printf("Multiply  >> 3\n");
	printf("Divide    >> 4\n");
	printf("And       >> 5\n");
	printf("Or        >> 6\n");
	printf("Not       >> 7\n");
	printf("Xor       >> 8\n");
	printf("reminder  >> 9\n");
	printf("Increment >> 10\n");
	printf("Decrement >> 11\n");
	
	printf("Enter Number between 1 to 11\n");
	scanf("%d",&ID);
	
	
	switch(ID)
	{
		case(1) : 
				printf("Enter Frist Number");
				scanf("%d",&num1);
				printf("Enter Secound Number");
				scanf("%d",&num2);
				
				int sum  = ADD(num1,num2);
				printf("Add = %d \n",sum );
				break;
		case(2) : 
				printf("Enter Frist Number");
				scanf("%d",&num1);
				printf("Enter Secound Number");
				scanf("%d",&num2);
				
				int sub = SUB (num1,num2);
				printf("Subtract = %d \n",sub);
				break;
		case(3) : 
				printf("Enter Frist Number");
				scanf("%d",&num1);
				printf("Enter Secound Number");
				scanf("%d",&num2);
				
				int mult = MULT (num1,num2);
				printf("Multiply = %d \n",mult);
				break;
		case(4) : 
				printf("Enter Frist Number");
				scanf("%d",&num1);
				printf("Enter Secound Number");
				scanf("%d",&num2);
				
				int div = DIV (num1,num2);
				printf("Divide = %d \n",div);
				break;
		case(5) : 
				printf("Enter Frist Number");
				scanf("%d",&num1);
				printf("Enter Secound Number");
				scanf("%d",&num2);
				
				int and = AND (num1,num2);
				printf("And = %d \n",and);
				break;
		case(6) : 
				printf("Enter Frist Number");
				scanf("%d",&num1);
				printf("Enter Secound Number");
				scanf("%d",&num2);
				
				int or = OR (num1,num2);
				printf("Or = %d \n",or);
				break;
		case(7) : 
				printf("Enter Number");
				scanf("%d",&num1);
				
				int not = NOT (num1);
				printf("Not = %d \n",not);
				break;
		case(8) : 
				printf("Enter Frist Number");
				scanf("%d",&num1);
				printf("Enter Secound Number");
				scanf("%d",&num2);
				
				int xor = XOR (num1,num2);
				printf("Xor = %d \n",xor);
				break;
		case(9) : 
				printf("Enter Frist Number");
				scanf("%d",&num1);
				printf("Enter Secound Number");
				scanf("%d",&num2);
				
				int rem = REM (num1,num2);
				printf("reminder = %d \n",rem);
				break;
		case(10) : 
				printf("Enter Number");
				scanf("%d",&num1);
				
				
				int inc = INC (num1);
				printf("Increment = %d \n",inc);
				break;
		case(11) : 
				printf("Enter Number");
				scanf("%d",&num1);
				
				
				int dec = DEC (num1);
				printf("Decrement = %d \n",dec);
				break;
				
		default : printf("Please Enter Number between 1 to 11\n");
		
	}
	
	
	
	
	
	
}

int ADD (int x, int y)
{
	int sum = x+y;
	return sum;
}

int SUB (int x, int y)
{
	int sub =x-y;
	return sub;
}

int MULT (int x, int y)
{
	int mult = x*y;
	return mult;
}

int DIV (int x, int y)
{
	int div = x/y;
	return div;
}

int AND (int x, int y)
{
	int and = x&y;
	return and;
}

int OR (int x, int y)
{
	int or =x|y;
	return or;
	
}

int NOT (int x)
{
	int not = !x;
}

int XOR (int x, int y)
{
	int xor = x^y;
	return xor;
}

int REM (int x, int y)
{
	int rem = x % y;
	return rem;
}

int INC (int x)
{
	int inc = x++;
	return x;
}

int DEC (int x)
{
	int dec = --x;
	return dec;
}