#include <stdio.h>

int main() {
    float c, f;

    printf("nhiet do C: ");
    scanf("%f", &c);
	f = (c * 9 / 5) + 32;
	printf("%.2f do C bang %.2f do F.\n", c, f);

    return 0;
}

