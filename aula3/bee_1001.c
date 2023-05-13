#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x, y;

    //printf("Digite A: ");
    scanf("%d", &x);
    //printf("Digite B: ");
    scanf("%d", &y);

    y = y + x;

    printf("X = %d\n", y);

    return 0;
}
