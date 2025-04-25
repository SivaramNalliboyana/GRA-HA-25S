#include <stdio.h>
#include <stdint.h>

extern void* memccpy (void* dest, const void* src, int c, size_t n);

int main(void) {
    // you can implement some tests here on your own
    memccpy(NULL, NULL, 0, 0);
    return 0;
}