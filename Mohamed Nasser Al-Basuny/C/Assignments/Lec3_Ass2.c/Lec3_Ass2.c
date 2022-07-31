/////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////// Author      : Mohamed Nasser Al-Basuny	   //////////////////////////////
////////////////////// date			: 16/7/2022						/////////////////////////////
///////////////////// Version       : 1.0 V							 ////////////////////////////
//////////////////// Descriotion	:  lec3 Ass 2		             ////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
void main(void)
{
	int ID , pass,x;
	int flag = 0 ;
	
	
	printf("Enter Your ID : ");
	scanf("%d",&ID);
	
	switch(ID)
	{
		case 1234 : 
					printf("Enter Your Password : ");
					
					
					for (x=0 ; x<3 ; x++)
					{
						scanf("%d",&pass);
						
						if (pass == 7788)
						{
							printf("Welcome Ahmed");
							flag=1;
							break;
						}
						else if (x<2)
						{
							printf("try again : ");
						}
					}
					break;
		



		case 5678 : 
					printf("Enter Your Password : ");
					
					
					for (x=0 ; x<3 ; x++)
					{
						if (pass == 5566)
						{
							scanf("%d",&pass);
							
							printf("Welcome Amr");
							flag=1;
							break;
						}
						else if (x<2)
						{
							printf("try again");
						}
					}
					break;
					
					
					
		case 9870 : 
					printf("Enter Your Password : ");
					
					
					for (x=0 ; x<3 ; x++)
					{
						scanf("%d",&pass);
						
						if (pass == 1122)
						{
							printf("Welcome Wael");
							flag=1;
							break;
						}
						else if (x<2)
						{
							printf("try again");
						}
					}
					break;
					
					
		default : 
					
					printf("You are not registered");
					flag=2;
	}
	
	
	if (flag == 0)
	{
		printf ("No more tries");
	}
	
	
}

