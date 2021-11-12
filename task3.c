#include <cs50.h>
#include <stdio.h>


int main(void)
{
    int day;
    day = get_int("Введіть день тижня: ");
    switch(day)
    {
        case 1: printf("Понеділок \n");
        break;
        case 2: printf("Вівторок \n");
        break;
        case 3: printf("Середа \n");
        break;
        case 4: printf("Четвер \n");
        break;
        case 5: printf("П'ятниця \n");
        break;
        case 6: printf("Субота \n");
        break;
        case 7: printf("Неділя \n");
        break;
        default: printf("Помилка. Введіть число 1 - 7");
    }
}
