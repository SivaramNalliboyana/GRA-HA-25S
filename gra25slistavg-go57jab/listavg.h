#ifndef LISTAVG_H
#define LISTAVG_H

struct node {
    struct node* next;
    double val;
};

double listavg(const struct node* list);

#endif


