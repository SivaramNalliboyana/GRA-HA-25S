#include <stdint.h>

int ean13(uint64_t ean) {
    // Implement the function here
    uint64_t n = ean ;
    
    int even = 1;
    int sum = 0;

    while (n > 0 ){
        uint64_t lastDig = n % 10;
        n = n / 10;
        if (even == 1){
            sum += lastDig;
            even = 0;
        }else{
            sum += lastDig * 3;
            even = 1;
        }
    }
    
    if (sum % 10 == 0){
        return 1;
    }else{
        return 0;
    }
}