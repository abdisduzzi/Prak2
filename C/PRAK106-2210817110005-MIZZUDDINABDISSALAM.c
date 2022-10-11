#include <stdio.h>

int main (){
    int a, b, c;

    printf("variabel a bernilai : ");
    scanf("%d", &a);
    printf("variabel b bernilai : ");
    scanf("%d", &b);
    printf("variabel c bernilai : ");
    scanf("%d", &c);

    if(a == b){
    printf("apakah a sama dengan b? jawabannya adalah : 1\n");}
    else if(a != b){
    printf("apakah a sama dengan b? jawabannya adalah : 0\n");}

    if(b > c){
    printf("apakah b lebih besar dari c? jawabannya adalah : 1\n");}
    else if(b < c){
    printf("apakah b lebih besar dari c? jawabannya adalah : 0\n");}

    if(a != c){
    printf("apakah a tidak sama dengan c? jawabannya adalah : 1\n");}
    else if(a == c){
    printf("apakah a tidak sama dengan c? jawabannya adalah : 0\n");}
    return 0;
}
