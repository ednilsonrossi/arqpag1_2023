#include <stdio.h>

int main(int argc, char const *argv[])
{
    double value;

    printf("Enter number: ");
    scanf("%lf", &value);

    printf("Value: %.18lf\n\n", value);

    return 0;
}
