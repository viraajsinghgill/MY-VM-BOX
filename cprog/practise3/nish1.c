#include <stdio.h>

int num_of_prime(int ro_x, int ro_y)
{
     
    int ro_count = 0;
    while (ro_x!=ro_y)
    {
        int ro_get=0;
        for (int i=1; i<=ro_x ; i++)
        {
            if (ro_x % i == 0)
            {
                ro_get++;
                
            }
        }
        if (ro_get==2)
        {
            ro_count++;
        }
        ro_x++;
    }
    
    return (ro_count);
}
int main()
{
    int ro_roll_no, ro_a, ro_b;
    printf("Enter your roll num:- ");
    scanf("%d", &ro_roll_no);
    ro_a = (ro_roll_no % 10) + 10;
    ro_b = (ro_roll_no % 100) + 20;
   
    int ro_ans = num_of_prime(ro_a, ro_b);
    printf("%d", ro_ans);
    return 0;
}
