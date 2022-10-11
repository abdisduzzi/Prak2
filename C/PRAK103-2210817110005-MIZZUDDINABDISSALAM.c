#include <stdio.h>

int main(){
    float a, b, x, y;
    float hasil;

    printf("variable a bernilai :");
    scanf("%f", &a);
    printf("variable b bernilai :");
    scanf("%f", &b);
    printf("variable x bernilai :");
    scanf("%f", &x);
    printf("variable y bernilai :");
    scanf("%f", &y);

    hasil= (a + b) * x / y;
    printf ("Hasil dari a tambah b dikali x dan dibagi y %.2f\n", hasil);
    return 0;
}
