#include<stdio.h>
int main()
{
  int n,ct,total,t=0,w=0;
  float avg_tat , avg_wt;
  int at[5],bt[5],tat[5],wt[5];
  printf("enter the no. of process=");
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    printf("enter the arrival time and burst time of process  %d = ",i+1);
    scanf("%d%d",&at[i],&bt[i]);
  }
  ct=0;
  for(int i=0 ; i<n ;i++)
  {
    ct=ct+bt[i];
    tat[i]=ct-at[i];
    wt[i]=tat[i]-bt[i];
    t=t+tat[i];
    w=w+wt[i];
    
  }
  
  avg_tat=t/n;
 avg_wt=w/n;
  printf("\n p# \t AT \t BT \t TAT \t WT");
  for(int i=0;i<n;i++)
  { 
  if(wt[i]<0)
  {
  wt[i]=0;
  }
    printf("\n p%d\t %d\t %d\t %d\t %d\t",i+1,at[i],bt[i],tat[i],wt[i]);
  }
  printf("\naverage turn around time %f",avg_tat);
   printf("\naverage waiting time %f",avg_wt);
  

}
