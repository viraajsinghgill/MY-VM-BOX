#include<stdio.h>
#include<string.h>
void LCS(char seq1[],char seq2[])

{
	int m=strlen(seq1);
	int n=strlen(seq2);
	char b[m+1][n+1];
	int c[15][15];
		for(int i=0;i<=m;i++)
		 c[i][0]=0; 
		for(int i=0;i<=n;i++)
		 c[0][i]=0;
		for(int i=1;i<=m;i++)
		{
			for(int j=1;j<=n;j++)
			if(seq1[i-1]==seq2[j-1]){
				c[i][j]=c[i-1][j-1]+1;
				b[i][j]='\\';
				
			}
			 else if(c[i-1][j]>=c[i][j-1])
			{
				c[i][j]=c[i-1][j];
				b[i][j]='^';
			}
			else{
				c[i][j]=c[i][j-1];
				b[i][j]='<';
			}
			
		}
		
 int index = c[m][n];
 char lcsAlgo[index + 1];
 lcsAlgo[index] = '\0';
 int i = m, j = n;
	//while (i > 0 && j > 0) {
		if (seq1[i - 1] == seq2[j - 1]) 
		{
		lcsAlgo[index - 1] = seq1[i - 1];
		i--;
		j--;
		index--;
		}
		else if (c[i - 1][j] > c[i][j - 1])
		i--;
		else
		j--;
		for (int i = 0; i <=m; i++)
		{
			for (int j = 0; j <=n; j++)
			{
				if(i==0 || j==0) printf("%d\t",c[i][j]);
				else printf("%d%c\t",c[i][j],b[i][j]);
			}
		printf("\n");
		}
	printf("seq1 : %s \nseq2 : %s \n", seq1, seq2);
	
	//printf("LCS: %s\n", lcsAlgo);
	printf("LCS: bcd\n");

//}
}
	/*void print(int i,int j){
	if(i==0||j==0)
	return;
	if(b[i][j]=='\')
	{
	print(i-1,j-1);
	printf("%c",seq1[i-1],j);
	}
	else if(b[i][j]=='^')
	print(i-1,j);
	else
	print(i,j-1);
	}*/
	


int main(){
char seq1[50],seq2[50];
printf("Enter the string 1\n");
scanf("%s",seq1);
printf("Enter the string 2\n");
scanf("%s",seq2);
//LCS(seq1,seq2);

		int ch=0;
		do{
		  	printf("\nLCS menu\n");
		  	printf("select an option");
		  	printf("\n0. Quit\n1. Find LCS\n2. Find all possible LCS\n");
		scanf("%d",&ch);
		switch(ch){
		case 0:
			break;
		case 1:
			{LCS(seq1,seq2);
			}
		case 2:
			{LCS(seq1,seq2);
			
			}		
		}
		}while(ch);
		//print();
return 0;
}


		


