#include <stdio.h>

int main() {

    int x = 5, y=10, data=0;

    data = ++x + ++y + ++x;

    printf("%d\n", data);
    
    printf("Hello world!\n");
    return 0;
}