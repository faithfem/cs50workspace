#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int height; do

    //prompt the user

    {
        printf("Height:\n");
        height = get_int();
    }
    while (height < 0);
    //build the pyramid
    //first build levels

    //NEXT IS THE RIGHT SIDE OF THE PYRAMID

    for (int height_counter = 0; height_counter < height; height_counter++)
        {
        //to build the lines
        int spaces = height - height_counter+0; //CHANGED HEIGHT CUONTER TO +0 INSTEAD OF +1
            for (int spaces_counter = 0; spaces_counter < spaces; spaces_counter++)
            {
                printf("%s", " ");
                //printf(" ");

            }

        for (int blocks_counter = 0; blocks_counter < height_counter; blocks_counter++)
            {
            printf("%s", "#");
            }
        //start a new line
            printf("\n");

        }

//printf("  \t");


}
