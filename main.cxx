#include <stdio.h>

int main() {
    char *message;
    int num = 2;
    while(num <= 8) {
        printf("%d\n", (int)*message * num);
        num += num;
    }
    return 0;
}

