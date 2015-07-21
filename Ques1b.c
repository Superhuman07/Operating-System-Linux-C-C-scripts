/* Ques 1 (b)Same program , different code */



#include<stdio.h>


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
       
 int a,b,sum;

  printf("Chid Process \n");
 
  printf("Addition ::>> Enter two Numbers:: \n");
 
  scanf("%d %d",&a,&b);
 
  sum=a+b;

  printf("Sum is=%d \n",sum);

}
 
   else
{
    
    wait(NULL);
 
   int c,d,diff;
  
   printf("Parent Process \n");

   printf("Subtraction ::>> Enter two Numbers:: \n");

   scanf("%d %d",&c,&d);
 
   diff=c-d;

   printf("Difference is=%d \n",diff);
    
 }

}

