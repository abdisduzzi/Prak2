#include <stdio.h>

int main(){
    float a, b, c;
    float jumlah;

    printf("variable a bernilai :");
    scanf("%f", &a);
    printf("variable b bernilai :");
    scanf("%f", &b);
    printf("variable c bernilai :");
    scanf("%f", &c);
    jumlah = (a * b) / c;
    printf ("hasil %f\n", jumlah);
    return 0;
}
