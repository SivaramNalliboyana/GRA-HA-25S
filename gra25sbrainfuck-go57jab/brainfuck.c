
#include "brainfuck.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int brainfuck(struct BFState* state, const char* program) {
    // Implement you solution here
    (void) state;
    (void) program;


    int index = 0;

    while (program[index] != '\0')
    {
        switch (program[index])
        {

            case ('['):
            if (*state->cur == 0) {
                int tiefe = 1;
                while (tiefe > 0) {
                    index++;
                    if (program[index] == '\0') return -1;
                    if (program[index] == '[') tiefe++;
                    else if (program[index] == ']') tiefe--;
                }
            }
    
                break;
    
            case (']'):
            if (*state->cur != 0) {
                int tiefe = 1;
                while (tiefe > 0) {
                    if (index == 0) return -1;
                    index--;
                    if (program[index] == ']') tiefe++;
                    else if (program[index] == '[') tiefe--;
                }
    
                continue;
            }
    
            break;    
        
        case ('>'):
            if (state->cur + 1 >= state->array + state->array_len) return -1;
            state->cur++;
            break;

        case ('<'):
            if (state->cur == state->array) return -1;
            state->cur--;
            break;

        case ('+'):
            *(state->cur) += 1;
            break;
        case ('-'):
            *(state->cur) -= 1;
            break;

        

        default:
            break;
        }

        index++;
    }
    
    return 0;
}