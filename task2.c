#include <cs50.h>
#include <stdio.h>


int A, B, count = 0;

int main()
{
    do
    {
        A = get_int("Введіть A: ");
        B = get_int("Введіть B: ");
    }
    while (A > B || A == B);

   for (int i = A; i < B + 1; i++)
   {
       printf("%i ", i);
       count++;
   }

    printf("\n");

   printf("N: %d\n", count);

   return 0;

}