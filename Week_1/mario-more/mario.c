#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompts the user for the height of the block (#) pyramid
    int height;

    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    printf("Height is %i\n", height);

}
