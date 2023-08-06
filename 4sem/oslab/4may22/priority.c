#include<stdio.h>
struct process
{
    int WT_343,AT_343,BT_343,TAT_343,PT;
};

struct process a[10];

int main()
{
    int n,temp[10],t,count=0,short_p;
    float total_WT_343=0,total_TAT_343=0,Avg_WT_343,Avg_TAT_343;
    printf("Enter the number of the process\n");
    scanf("%d",&n);
    printf("Enter the arrival time , burst time and priority of the process\n");
    printf("AT_343 BT_343 PT\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d%d%d",&a[i].AT_343,&a[i].BT_343,&a[i].PT);
        
        
        temp[i]=a[i].BT_343;
    }
    
    
  
    
    for(t=0;count!=n;t++)
    {
        short_p=9;
        for(int i=0;i<n;i++)
        {
            if(a[short_p].PT>a[i].PT && a[i].AT_343<=t && a[i].BT_343>0)
            {
                short_p=i;
            }
        }
        
        a[short_p].BT_343=a[short_p].BT_343-1;
        
      
        if(a[short_p].BT_343==0)
        {
            
            count++;
            a[short_p].WT_343=t+1-a[short_p].AT_343-temp[short_p];
            a[short_p].TAT_343=t+1-a[short_p].AT_343;
            
            
            total_WT_343=total_WT_343+a[short_p].WT_343;
            total_TAT_343=total_TAT_343+a[short_p].TAT_343;
            
        }
    }
    
    Avg_WT_343=total_WT_343/n;
    Avg_TAT_343=total_TAT_343/n;
    
  
    printf("ID WT_343 TAT_343\n");
    for(int i=0;i<n;i++)
    {
        printf("%d %d\t%d\n",i+1,a[i].WT_343,a[i].TAT_343);
    }
    
    printf("Avg waiting time of the process  is %f\n",Avg_WT_343);
    printf("Avg turn around time of the process is %f\n",Avg_TAT_343);
    
    return 0;
}
