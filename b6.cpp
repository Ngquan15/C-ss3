#include <stdio.h>

int main() {
    float canh_day,chieu_cao , dien_tich;

    printf("nhap canh day: ");
    scanf("%f", &canh_day);

    printf("nhap chieu cao: ");
    scanf("%f", &chieu_cao);

    dien_tich = 0.5 * canh_day *chieu_cao;

    printf("dien tich : %.2f\n", dien_tich);

    return 0;
}
