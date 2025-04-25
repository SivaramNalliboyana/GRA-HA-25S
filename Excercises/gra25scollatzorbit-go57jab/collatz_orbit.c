#include <stdint.h>

uint64_t collatz_orbit(uint64_t n, uint64_t k) {
    // Implement the function her
    const int helperArray[] = {4,2,1};

    while (k > 0 ){

        if ((n & 1) == 0){
            if (n == 4){
                k = k % 3;
               
                return helperArray[k];
            }
            n = n >> 1;
        }else{
            if (n >= 6148914691236517205  ){
                return 0;
            }
            n = (3*n+1);
        }
        k = k-1;
    }
    
    return n;

}




