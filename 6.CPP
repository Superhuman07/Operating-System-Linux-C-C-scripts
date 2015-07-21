/* Ques 6 Program to sort processes by shortest time first algorithm*/


#include<stdio.h>
#include<conio.h>
int main()
{ 
	int bt[10],at[10],wait_Time_Sum=0,turn_Time_Sum=0;
	int time=0,n,i,smallest,count=0;
	printf("Enter no of processes : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter arrival time for process P%d : ",i+1);
    	scanf("%d",&at[i]);
    	printf("Enter burst time for process P%d : ",i+1);
    	scanf("%d",&bt[i]);
  	}

  	printf("\n\nProcess\t|Turnaround Time| Waiting Time\n\n");
  	at[9]=9999;

	//End the loop when n process finish		
  	while(count!=n)  
	{
  		// Checking For index of Process with smallest Arrival Time
    	smallest=9; 
    	for(i=0;i<n;i++)
    	{
      		if(at[i]<at[smallest] && bt[i]>0)
     		{
      			smallest=i;
      		}
    	}
	//Index of Smallest  Arrival Time stored in `smallest`
    
    //Incrementing Current Time
	time+=bt[smallest];  
    wait_Time_Sum+=time-at[smallest]-bt[smallest];
    turn_Time_Sum+=time-at[smallest];

    printf("P[%d]\t|\t%d\t|\t%d\n",smallest+1,time-at[smallest],time-at[smallest]-bt[smallest]);


	//Making burst time of current Process 0 so that it won't run again
    bt[smallest]=0;  
    count++;
	}

	printf("\n average waiting time = %f",wait_Time_Sum*1.0/n);
	printf("\n average turnaround time = %f\n",turn_Time_Sum*1.0/n);
}
