#include <stdio.h>

int main() {
    int sayi1, sayi2;
    int *ptr1, *ptr2;

    // İşaretçilere değişkenleri atama
    ptr1 = &sayi1;
    ptr2 = &sayi2;

    // Değerleri kullanarak işaretçileri kullanarak değişkenlere atama
    *ptr1 = 10;
    *ptr2 = 20;

    // Değerleri ekrana yazdırma
    printf("sayi1 = %d\n", *ptr1);
    printf("sayi2 = %d\n", *ptr2);

    return 0;
}