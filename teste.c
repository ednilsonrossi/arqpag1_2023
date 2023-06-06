#include <stdio.h>

int main(int argc, char const *argv[])
{
    float value;

    value = 0.25;
    for(int i = 1; i != 64; i++){
        printf("%.2f\n", value);
        value = value * 2;
    }
    return 0;
}
