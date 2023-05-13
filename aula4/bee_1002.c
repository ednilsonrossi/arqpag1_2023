#include <stdio.h>

double calcula_area(double r);

int main(){
    double raio;
    scanf("%lf", &raio);
     
    printf("A=%.4lf\n", calcula_area(raio));
    
    return 0;
}

double calcula_area(double r){
    r = r * r;
    return 3.14159 * r;
}
