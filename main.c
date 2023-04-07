#include <stdio.h>

float ortalamaMaas(int maas[], int n) {
    int toplam = 0;
    int minMaas = maas[0];
    int maxMaas = maas[0];
    
    // Toplam� ve min/max maa�� hesapla
    for (int i = 0; i < n; i++) {
        if (maas[i] < minMaas) {
            minMaas = maas[i];
        }
        if (maas[i] > maxMaas) {
            maxMaas = maas[i];
        }
        toplam += maas[i];
    }
    
    // Min ve max maa� hari� ortalama maa�� hesapla
    float ortalama = (float)(toplam - minMaas - maxMaas) / (n - 2);
    return ortalama;
}

int main() {
    int maas[] = {21000, 19000, 13000, 10000, 9000};
    int n = sizeof(maas) / sizeof(maas[0]);
    float sonuc = ortalamaMaas(maas, n);
    printf("Min ve max maas hari� ortalama maas: %.1f", sonuc);
    return 0;
}
