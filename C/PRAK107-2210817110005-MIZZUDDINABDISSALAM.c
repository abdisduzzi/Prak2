#include <stdio.h>

int main(){
    int sisi1 = 4, sisi2 = 7, sisi3 = 5, keliling, h, biaya;

    printf("Diketahui :\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", sisi1, sisi2, sisi3);
    keliling = sisi1 + sisi2 + sisi3;
    printf("Kelilint tanah Pak Dengklek adalah %d\n", keliling);
    printf("Harga tanah Per Meter adalah : ");
    scanf("%d", &h);
    printf("Jawaban :\n");
    biaya = h * keliling;
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d\n", biaya);
    return 0;
}
