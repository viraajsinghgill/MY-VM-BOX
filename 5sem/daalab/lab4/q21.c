#include <stdio.h>
void sort(int a[], int i, int m, int j)
{
int l1 = m - i + 1, l2 = j - m, p1 = 0, p2 = 0, t = i;
int a1[l1], a2[l2];
for (int g = 0; g < l1; g++)
{
a1[g] = a[g + i];
}
for (int g = 0; g < l2; g++)
{
a2[g] = a[g + m + 1];
}
while (p1 < l1 && p2 < l2)
{
if (a1[p1] < a2[p2])
{
a[t] = a1[p1++];
}
else if (a1[p1] > a2[p2])
a[t] = a2[p2++];
else
{
a[t] = a1[p1++];
a[t] = a2[p2++];
}
++t;
}
while (p1 < l1)
{
a[t++] = a1[p1++];
} 
while (p2 < l2)
{
a[t++] = a2[p2++];
} }
void mergeSort(int a[], int i, int j)
{
if (i < j)
{
int mid = i + (j - i) / 2;
mergeSort(a, i, mid);
mergeSort(a, mid + 1, j);
sort(a, i, mid, j);
} }
int main(int argc, char const *argv[])
{
int n;
printf("\n Size of Array: ");
scanf("%d", &n);
int a[n];
printf("\n Array: ");
for (int i = 0; i < n; i++)
{
scanf("%d", &a[i]);
}
mergeSort(a, 0, n);
printf("\n Sorted Array: ");
for (int i = 0; i < n; i++)
{
printf("%d ", a[i]);
}
return 0;
}
