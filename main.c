#include <stdio.h>

#include "stack.h"

int main() {
    stack s;
    stack_init(&s, 10, sizeof(int));

    for(int i = 0; i < 10; i++){
        stack_push(&s, &i);
    }

    for(int i = 0; i < 10; i++){
        int *ele = stack_pop(&s);
        printf("%d\n", *ele);
    }


}
