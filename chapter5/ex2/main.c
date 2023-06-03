#include <stdio.h>

int main ()
{
    unsigned int cups;
    char choose;

    printf("Do you drink coffee or tea (c/t)?\n");
    scanf("%c", &choose);
    printf("How many cups do you drink daily:\n");
    scanf("%u", &cups);

    if (choose == 'c' && cups <= 2)
    {
    printf("You don't drink a lot of coffee, do you?");
    }
    else if (choose == 'c' && cups > 2 && cups <= 20 )
    {
    printf("You drink a lot of coffee!");
    }
    else if (choose == 't' && cups <= 2)
    {
     printf("You do not drink a lot of tea");
    }
    else if (choose == 't' && cups > 2 && cups <= 20)
    {
     printf("You drink a lot of tea!");
    }
    else
    {
    printf("An error occurred in the program!");
    }

   return 0;
}
