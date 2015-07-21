/* Ques 1 WRITE A PROGRAM (using fork() and/or exec() commands) where parent and child executes. 
   
 
  (a) same program , same code  */


#include<stdio.h>

void main()

{
    
	printf("Before Fork \n");

	fork();

	printf("Hello \n");
	fork();
 
	printf("BYE.. \n");

}
