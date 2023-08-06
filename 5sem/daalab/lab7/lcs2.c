#include <stdio.h>
#include <string.h>
void lcstable(char str1[],char str2[]){
		int m = strlen(str1);
		int n = strlen(str2);
	char B[m+1][n+1];
	int C[20][20];
	for (int i = 0; i <= m; i++)
	C[i][0] = 0;
	for (int i = 0; i <= n; i++)
	C[0][i] = 0;
// Building the mtrix in bottom-up way
		for (int i = 1; i <= m; i++)
		for (int j = 1; j <= n; j++) {
		if (str1[i - 1] == str2[j - 1]) {
		C[i][j] = C[i - 1][j - 1] + 1;
		B[i][j]='\\';
		}
		else if (C[i - 1][j] >= C[i][j - 1]) {
		C[i][j] = C[i - 1][j];
		B[i][j]='^';
		}
		else {
		C[i][j] = C[i][j - 1];
		B[i][j]='<';
		}
		}
		int index = C[m][n];
		char lcsAlgo[index + 1];
		lcsAlgo[index] = '\0';
		int i = m, j = n;
		while (i > 0 && j > 0) {
		if (str1[i - 1] == str2[j - 1]) {
		lcsAlgo[index - 1] = str1[i - 1];
		i--;
		j--;
		index--;
		}
		else if (C[i - 1][j] > C[i][j - 1])
		i--;
		else
		j--;
		}
		for (int i = 0; i <=m; i++)
		{
		for (int j = 0; j <=n; j++)
		{
		if(i==0 || j==0) printf("%d\t",C[i][j]);
		else printf("%d%c\t",C[i][j],B[i][j]);
		}
		printf("\n");
		}
		printf("str1 : %s \nstr2 : %s \n", str1, str2);
		printf("LCS: %s\n", lcsAlgo);
}
void main(){
		char str1[50],str2[50];
		printf("Enter the string 1\n");
		scanf("%s",str1);
		printf("Enter the string 2\n");
		scanf("%s",str2);
		//lcstable(str1,str2);
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
			{lcstable(str1,str2);
			}
		case 2:
			{lcstable(str1,str2);
			
			}		
		}
		}while(ch);
}














		


