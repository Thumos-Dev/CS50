#include <cs50.h>
#include <stdio.h>

int getHeight();
void print(int height);

int main(void)
{
    int height = getHeight();
    print(height);
}

int getHeight()
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height <1 || height > 8);
    return height;
}

void print(int height)
{
    for (int row = 0; row < height; row++)
    {
        for (int spaces = row + 1; spaces < height; spaces++)
        {
            printf(" "); // Print spaces for alignment
        }
        for (int bricks = height + row + 1; bricks > height; bricks--)
        {
            printf("#"); // Print '#' characters for the bricks
        }
        printf("\n");
    }
}
