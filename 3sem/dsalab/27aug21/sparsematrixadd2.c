void read_sp_mat(int sp[][3]) {
int r, c, i, j, n;
printf("\nEnter r and c : ");
scanf("%d %d", &r, &c);
printf("\nEnter # of nonzero elements : ");
scanf("%d", &n);
printf("\nEnter the elements \n");
j=1;
for(i=1; i <= n; i++) {
printf("\nEnter row no : ");
scanf("%d", &sp[j][0]);
printf("\nEnter col no : ");
scanf("%d", &sp[j][1]);
printf("\nEnter the value : ");
scanf("%d", &sp[j][2]);
j++;
}
sp[0][0] = r;
sp[0][1] = c;
sp[0][2] = n;
}
int add_sp_mat(int sp1[][3], sp2[][3], sp3[][3]) {
int r, c, i, j, k1, k2, k3, tot1 ,tot2;
if( sp1[0][0] != sp2[0][0] || sp1[0][1] != sp2[0][1] ) {
printf("Invalid matrix size ");
exit(0);
}
tot1 = sp1[0][2]; tot2 = sp2[0][2];
k1 = k2 = k3 = 1;
while ( k1 <= tot1 && k2 <= tot2) {
if ( sp1[k1][0] < sp2[k2][0] ) {
sp3[k3][0] = sp1[k1][0];
sp3[k3][1] = sp1[k1][1];
sp3[k3][2] = sp1[k1][2];
k3++; k1++;
}
else
if ( sp1[k1][0] > sp2[k2][0] ) {
sp3[k3][0] = sp2[k2][0];
sp3[k3][1] = sp2[k2][1];
sp3[k3][2] = sp2[k2][2];
k3++;k2++;
}
else
if(sp1[k1][1] < sp2[k2][1]) {
sp3[k3][0]=sp1[k1][0];
sp3[k3][1]=sp1[k1][1];
sp3[k3][2]=sp1[k1][2];
k1++; k3++;
}
}
}
else
if(sp1[k1][1] > sp2[k2][1]) {
sp3[k3][0]=sp2[k2][0];
sp3[k3][1]=sp2[k2][1];
sp3[k3][2]=sp2[k2][2];
k2++;
k3++;
}
else //if ( sp1[k1][0] == sp2[k2][0] )
{
sp3[k3][0] = sp2[k2][0];
sp3[k3][1] = sp2[k2][1];
sp3[k3][2] = sp1[k1][2] + sp2[k2][2];
k3++;k2++;k1++;
}
}
while ( k1 <=tot1 ) {
sp3[k3][0] = sp1[k1][0];
sp3[k3][1] = sp1[k1][1];
sp3[k3][2] = sp1[k1][2];
k3++;k1++;
}
while ( k2 <= tot2 ) {
sp3[k3][0] = sp2[k2][0];
sp3[k3][1] = sp2[k2][1];
sp3[k3][2] = sp2[k2][2];
k3++;k2++;
}
sp3[0][0] = sp1[0][0];
sp3[0][1] = sp1[0][1];
sp3[0][2] = k3-1;
}
}
