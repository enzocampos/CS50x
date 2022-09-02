#include <stdio.h>
#include <cs50.h>

int main(void)

//Prompt user for height (get_int to get an input) and use a "while" or "do while" loop to make the user to prompt number from 1 to 8, or else, it should re-prompt to the user
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while(n < 1 || n > 8);
        for (int i = 0; i < n; i++)
        {
                for (int j = 0; j < n; j++)
                {
                if (i + j < n - 1)
                    printf(" ");
                else
                    printf("#");
                }
                printf("\n");
        }
}
