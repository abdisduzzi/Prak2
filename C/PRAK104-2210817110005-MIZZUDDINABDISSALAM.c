#include <stdio.h>

int main(){
    int sepA, SepB, Dis13 = 13, Dis21 = 21;
    int hasil1, hasil2;
    char d = '%';
    printf("harga sepatu A adalah :");
    scanf("%d", &sepA);
    printf("harga sepatu B adalah :");
    scanf("%d", &SepB);
    printf("sepatu A mendapat diskon 13%c ", d, &Dis13);
    hasil1 = sepA - (sepA * Dis13 / 100);
    printf("sehingga harganya menjadi : %d\n", hasil1);
    printf("sepatu B mendapat diskon 21%c ", d, &Dis21);
    hasil2 = SepB - (SepB * Dis21 / 100);
    printf("sehingga harganya menjadi : %d\n", hasil2);
    return 0;
}
