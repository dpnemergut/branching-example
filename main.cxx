#include <stdio.h>

int main() {
    char *message;
    int num = 2;
    while(num <= 4) {
        printf("%d\n", num);
        num += num;
    }
    return 0;
}

