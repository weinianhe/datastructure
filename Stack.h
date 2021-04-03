//
// Created by Weinian He on 3/30/21.
//

#ifndef DATASTRUCTURE_STACK_H
#define DATASTRUCTURE_STACK_H
#include <stdio.h>
#define MAX 100
typedef enum Boolean {False, True} Boolean;
typedef struct Stack {
    int Top; /* Variable Top is used to denote the top position of stack */
    int S[MAX]; /*Array of integer elements */
} Stack;

void Push(Stack *, int), Display (Stack *);
#endif //DATASTRUCTURE_STACK_H
