#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
     height = get_int("What height? ");
    }
    while(height<0 || height>100);
    printf("Height: %i\n",height);

    for(int lines = 0; lines<height;lines++)
    {
        for(int spaces = height-lines; spaces>1;spaces--)
        {
            printf(" ");
        }
        for(int hashes = 0; hashes<=lines;hashes++)
        {
            printf("#");
        }

        printf("  ");
        for(int hashes = 0; hashes<=lines;hashes++)
        {
            printf("#");
        }
        for(int spaces = height-lines; spaces>1;spaces--)
        {
            printf(" ");
        }
        printf("\n");
    }
}
