#include "stack.h"

stack_p stack_init(stack_p p, size_t cap, size_t step) {
    p->bottom = malloc(cap * step);
    p->size = 0;
    p->step = step;
    p->cap = cap;
    return p;
}

void stack_destroy(stack_p p) {
    free(p->bottom);
}


void stack_push(stack_p p, void *ele) {
    void *current = p->bottom + p->step * p->size;
    memcpy(current, ele, p->step);
    p->size += 1;
}


void *stack_pop(stack_p p) {
    if (p->size != 0) {
        return p->bottom + (p->size-- - 1) * p->step;
    }
    return NULL;
}


void *stack_peek(stack_p p) {
    if (p->size != 0) {
        return p->bottom + (p->size - 1) * p->step;
    }
    return NULL;
}