/* Ques 2 WRITE A PROGRAM to report behaviour of Linux Kernel including Kernel Version, CPU type and model.(CPU information) */



#include<stdio.h>

#include<stdlib.h>


void main()

{
   
	 // CPU Type and Model
	system("cat /proc/cpuinfo | awk 'NR==5{print}' "); 
 
  
	printf("Kernel Version \n");

    // Kernel Version
	system("cat /proc/sys/kernel/osrelease" );    

 
 
}
