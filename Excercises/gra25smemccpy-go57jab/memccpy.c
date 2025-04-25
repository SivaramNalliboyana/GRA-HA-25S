#include <stddef.h>

void* memccpy(void* dest, const void* src, int c, size_t n) {
    // Implement the function here
    unsigned char* destination = (unsigned char*)dest;
    const unsigned char* source = (const unsigned char*)src;
    unsigned char target = (unsigned char)c;

    for (size_t i = 0; i < n; ++i) {
        destination[i] = source[i]; 
        if (source[i] == target) {
            return (void*)(destination + i + 1);
        }
    }

    return NULL;  
}