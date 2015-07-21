 /* Ques 1 (c)  before terminating, the parent waits for child to finish the task. */



#include<sys/types.h>

#include<stdio.h>

#include<unistd.h>


void main()

{
     int pid;

     pid=fork();
 
     if(pid<0)
    
{
        
  printf("Fork Failed \n");
   
}
   
  else if(pid==0)
{
     
     printf("Child Process \n");
  
     execlp("/bin/ls","ls",NULL);
      
}
    
 else
{
         
 wait(NULL);
     
  printf(" Parent Process Wait till Child Completes \n");
        
  printf(" Parent Process \n");
        
}

}
