#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int i = get_int("ENTER #: ");
    if (i<0)
    {
    printf("negative\n");

    }   else if (i>0) {
    printf("positive\n");
    }   else {
    printf("equal\n");
}
}

