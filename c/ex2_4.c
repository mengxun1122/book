#include <stdio.h>

void jolly(void); //注意带;
void deny(void);

int main(void)
{
    jolly();
    jolly();
    jolly();
    deny();
    return 0;
}

void jolly(void)
{
    printf("For he's jolly good fellow!\n");
}

void deny(void)
{
    printf("Which nobody can deny!\n");
}
