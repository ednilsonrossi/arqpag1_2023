#include <stdio.h>

float celcius(float fahrenheit);

int main(int argc, char const *argv[]){
    int inicial;
    
    for(inicial = 50; inicial != 150+1; inicial+=1){
        printf("%4d ºF ---> %5.2f ºC\n", inicial, celcius(inicial));
    }

    return 0;
}


float celcius(float fahrenheit){
    return (5 / 9.0) * (fahrenheit - 32);
}