#include <stdio.h>

int main(){
    float T, J, V;
    scanf("%f", &J);
    scanf("%f", &T);

    V = J / T;
    printf("%.3f", V);
    return 0;
}
