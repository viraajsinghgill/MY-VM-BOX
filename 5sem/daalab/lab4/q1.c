#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void insertion_sort(int arr[], int size)
{
  int i, j, temp;
  for (i = 1; i < size; i++)
  {
    temp = arr[i];
    for (j = i - 1; j >= 0; j--)
    {
      if (arr[j] > temp)
        arr[j + 1] = arr[j];
      else
        break;
    }
    arr[j + 1] = temp;
  }
}
void display_array(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("%d ", arr[i]);
  }
}
int binary_search(int arr[], int n, int key)
{
  int low = 0, high = n - 1;
  while (low <= high)
  {
    int mid = low + ((high - low) / 2);
    if (arr[mid] == key)
    {
      return mid;
    }
    if (key < arr[mid])
    {
      high = mid - 1;
    }
    else
    {
      low = mid + 1;
    }
  }
  return -1;
}
int main()
{
  int size, index, x;
  srand(time(0));
  printf("Enter the size of array::");
  scanf("%d", &size);
  int randArray[size], i;
  for (i = 0; i < size; i++)
    randArray[i] = rand() % 100;
  printf("\noriginal array\n");
  display_array(randArray, size);
  insertion_sort(randArray, size);
  printf("\nsorted array\n");
  display_array(randArray, size);
  printf("\nEnter the number u want to search:");
  scanf("%d", &x);
  clock_t start, end;
  start = clock();
  index = binary_search(randArray, size, x);
  printf("\nThe searched number is at position %d", index);
  end = clock();
  double d = ((double)(end - start) / CLOCKS_PER_SEC);
  printf("\n\nTime Complexity: %lf", d);
}
