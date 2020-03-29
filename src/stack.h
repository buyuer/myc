#pragma once

#include "base.h"

typedef struct {
    void *bottom;
    size_t size;
    size_t step;
    size_t cap;
} stack, *stack_p;

stack_p stack_init(stack_p p, size_t size, size_t step);

void stack_destroy(stack_p p);

void stack_push(stack_p p, void *ele);

void *stack_pop(stack_p p);

void *stack_peek(stack_p p);
