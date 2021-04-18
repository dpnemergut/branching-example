#include <stdio.h>

int main() {
    int num = 2;
    while(num <= 4) {
        printf("%d\n", num);
        num += num;
    }
    return 0;
}

