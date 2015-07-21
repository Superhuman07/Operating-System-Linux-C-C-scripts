#include<stdio.h>

int main()
{	int num = 1, count = 0;

	if(num>0)
	{	
		for(int i = 1; i <= num; i++)
		{
			if(num%i==0)
			{
				count++;
			}
		}	
			if(count == 2)
			{
				printf("the given number is a prime number\n");
			}
			
			else
			{
				printf("the given number is not a prime number\n");
			}
	}
	else
	{
		printf("enter a non - zero && non positive number\n");
	}
	return 0;
}
