#include <stdio.h>

int main(int argc, char const *argv[])
{
    double n1, n2, average;

    scanf("%lf", &n1);
    scanf("%lf", &n2);

    average = (n1 * 3.5 + n2 * 7.5) / (3.5 + 7.5);

    printf("MEDIA = %.5lf\n", average);

    return 0;
}
