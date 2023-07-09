#include <stdio.h>

int main() {
    FILE *dosya;
    char metin[] = "Bu bir metin dosyasidir.";

    // Dosyayı yazma modunda açma
    dosya = fopen("metin_dosyasi.txt", "w");
    if (dosya == NULL) {
        printf("Dosya acilamadi.");
        return 1;
    }

    // Metni dosyaya yazma
    fprintf(dosya, "%s\n", metin);

    // Dosyayı kapatma
    fclose(dosya);

    // Dosyayı okuma modunda açma
    dosya = fopen("metin_dosyasi.txt", "r");
    if (dosya == NULL) {
        printf("Dosya acilamadi.");
        return 1;
    }

    // Metni dosyadan okuma ve ekrana yazdırma
    char okunan_metin[100];
    fgets(okunan_metin, sizeof(okunan_metin), dosya);
    printf("Dosyadan okunan metin: %s", okunan_metin);

    // Dosyayı kapatma
    fclose(dosya);

    return 0;
}