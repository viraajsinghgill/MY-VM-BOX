
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int i, old_count=0, new_count=0, old_pos=-1, new_pos=0;
    int *ptr;
    printf("Enter a binary number\n");
    ptr= (int*) malloc (20*sizeof(int));
    for (i=0; i<20; ++i)
    scanf("%d", &ptr[i]);
     for (i=0; i<20; ++i)
    {
        if(ptr[i] == 0)
        {
            new_pos = i+1;
            new_count=0;
        }
        if (ptr[i] == 1)
        {
            new_count++;
            if (new_count>old_count)
            {
            old_count = new_count;
            old_pos = new_pos;
            }
        }
    }
    printf("count = %d and position= %d with highest consecutives",old_count,old_pos+1);

}
