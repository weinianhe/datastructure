//
// Created by Weinian He on 3/30/21.
//

#include "Stack.h"
void Push(Stack *stack, int value){
    stack->S[++stack->Top] = value;
}
void Display (Stack *stack){
    int i;
    for(i=stack->Top;i>=0;i--){
        printf("    %d\n",stack->S[i]);
    }
}