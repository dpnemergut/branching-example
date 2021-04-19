#include <stdio.h>

// This method runs a loop to generate a char message
int main() {
    char *message;
    int num = 2;
    while(num <= 8) {
        printf("%d\n", (int)*message * num);
        num += num;
    }
    return 0;
}

