#include <stdio.h>
#include <stdint.h>

extern int ean13(uint64_t ean);

int main(void) {
    uint64_t n = 123456789012;
    printf("%lu is %sa valid EAN-13\n", n, ean13(n) ? "" : "not ");
    return 0;
}