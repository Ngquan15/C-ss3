#include <stdio.h>
#include <string.h>

int main() {
    char name[20];

    printf("ten cua ban: ");
    fgets(name, sizeof(name), stdin);

    size_t len = strlen (name);
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
    }

    printf("xin chao %s!\n", name);
    return 0;
}
