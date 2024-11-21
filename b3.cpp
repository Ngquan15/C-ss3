#include <stdio.h>
#define PI 3.14 
int main() {
    float r, chu_vi, dien_tich;

    printf("Nhap ban kinh hinh tron : ");
    scanf("%f", &r);

    chu_vi = 2 * PI * r;
    dien_tich = PI * r * r;
    
    printf("chu vi : %.2f\n", chu_vi);
    printf("dien tich : %.2f\n", dien_tich);

    return 0;
}
