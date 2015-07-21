/* Ques 5 WRITE A PROGRAM to copy files using system calls. */


#include<stdio.h>

void main()

{

	int fd1,fd2,count;
 
	char buf[2];

 
	fd1=creat("Q5F1",0777);

	fd2=open("Q5F2",0644);

    // writes file content to other file by reading the first file
	while(count!=0)
 
	{
     
		count=read(fd2,buf,sizeof(buf));
 
		write(fd1,buf,count);
  
    }
   
	close(fd1);

 	close(fd2);

}
