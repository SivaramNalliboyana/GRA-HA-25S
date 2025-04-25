#include "listavg.h"
#include <stddef.h>  



double listavg(const struct node* list) {
    // Implement the function here
    if (list == NULL) return 0.0;
    struct node *temp = list;
    double sum = 0.0;
    int vals = 0;

    while (temp != NULL)
    {
       sum += temp->val;
       vals++;
       temp = temp->next;
    }

    return sum / vals;
    
   
}