#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int A, B, i, hasil;
    scanf("%i", &A);
    scanf("%i", &B);
    hasil = 0;
    for(i = A; i <= B; i++){
         hasil = hasil + i;
    }
    printf("%i", hasil);
    return 0;
}