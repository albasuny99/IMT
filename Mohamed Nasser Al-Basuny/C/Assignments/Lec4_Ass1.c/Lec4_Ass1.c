/////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////// Author      : Mohamed Nasser Al-Basuny	   //////////////////////////////
////////////////////// date			: 16/7/2022						/////////////////////////////
///////////////////// Version       : 1.0 V							 ////////////////////////////
//////////////////// Descriotion	:  lec4 Ass 1		             ////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int MAX (int a, int b, int c, int d);
int MIN (int a, int b, int c, int d);

void main (void)
{
	int num1,num2, num3,num4;
	
	
	
	printf("enter your num1 : ");
	scanf("%d",&num1);
	printf("enter your num2 : ");
	scanf("%d",&num2);
	printf("enter your num3 : ");
	scanf("%d",&num3);
	printf("enter your num4 : ");
	scanf("%d",&num4);
	
	int max = MAX(num1,num2,num3,num4);
	int min = MIN(num1,num2,num3,num4);
	
	printf(" the max number is : %d \n",max);
	printf(" the min number is : %d \n",min);
	
	
}

int MAX (int a, int b, int c, int d)
{
	if (a>b && a>c && a>d)
	{
		int max= a;
		return max;
	}
	
	else if(b>c&&b>d)
	{
		int max =b;
		return max;
	}
	else if (c>d)
	{
		int max =c;
		return max;
	}
	else{
		int max =d;
		return max;
	}
}

int MIN (int a, int b, int c, int d)
{
	if (a<b && a<c && a<d)
	{
		int min= a;
		return min;
	}
	
	else if(b<c && b<d)
	{
		int min =b;
		return min;
	}
	else if (c<d)
	{
		int min =c;
		return min;
	}
	else{
		int min =d;
		return min;
	}
}