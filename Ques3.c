/* Ques 3 WRITE A PROGRAM to report behaviour of Linux Kernel including information on configured memory, 
amount of free and used memory.(memory information)  */



#include<stdio.h>

#include<stdlib.h>


void main()

{
 
     // Total Memory---> Configured Memory
	system("cat /proc/meminfo | awk 'NR==1{print $1,$2,$3}' ");          
    
     // Free Memory
	system("cat /proc/meminfo | awk 'NR==2{print $1,$2,$3}' ");           

}
