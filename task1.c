#include <cs50.h>
#include <stdio.h>



int main (void)
{
    int N, K;
    N = get_int("Введіть коефіцієнт: \n");

    for (int i = 1; i <= N; i++)
    {
        if (i*i > N)
        {
            printf(" K = %d\n", i);
            break;
        }
    }
}
