#include <stdio.h>

int main(){
float mengelilingiT = 5, JarakT = 14, keliling, jarijari;

printf("Diketahui :\n");
printf("Pak Dengklek mengelilingi taman = %.f putaran\n", mengelilingiT);
printf("Jarak tempuh Pak Dengklek = %.f kilometer\n", JarakT);
printf("jawaban :\n");
keliling = JarakT / mengelilingiT;
jarijari = (keliling * 7) / (2 * 22);
printf("jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f\n", jarijari);

    return 0;
}
