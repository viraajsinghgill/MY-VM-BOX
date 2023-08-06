#include<stdio.h>

struct process{
	int name, at, bt;
};

int main(){
	struct process p[5];
	int i,curr=0;
	for(i=0;i<5;i++){
		p[i].name = i+1;
		printf("Arrival time for process %d: ",i+1);
		scanf("%d",&p[i].at);
		printf("Burst time for process %d: ",i+1);
		scanf("%d",&p[i].bt);
	}
	printf("Process\tAT\tBT\tCT\tTAT\tWT\n");
	for(i=0;i<5;i++){
		if(p[i].at > curr)
			curr=p[i].at;
		int j=0;
		int small = 0;
		while(p[j].at <= curr && j <5){
			if(p[small].bt > p[j].bt)
				small=j;
			j++;
		}
		curr+= p[small].bt;
		int ct = curr;
		int tat = ct - p[small].at;
		int wt = tat - p[small].bt;
		printf("%d\t%d\t%d\t%d\t%d\t%d\n", small+1,p[small].at,p[small].bt,ct,tat,wt);
		p[small].bt = 999999;
	}
}
