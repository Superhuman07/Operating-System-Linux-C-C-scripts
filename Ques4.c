/* Ques 4 WRITE A PROGRAM to print file details including owner access permissions,
file access time, where file name is given as arguement. */



#include<stdio.h>

#include<sys/stat.h>


void main()

{
	char fname[10];
 
    printf("Enter the name of the file which you want to access \n");
   
	scanf("%s",&fname[10]);

   
	struct stat buf;

   
	stat(fname,&buf);
   
	printf("\n Information of Owner : %d", buf.st_uid);
    
	printf("\n Name of Group : %d", buf.st_gid);
  
	printf("\n File Permissions : %d", buf.st_mode);
   
	printf("\n Access Time : %d", buf.st_atime);

}

     
     



