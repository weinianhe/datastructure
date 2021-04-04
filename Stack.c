//
// Created by Weinian He on 3/30/21.
//

#include "Stack.h"
void MainEntry(){
    Stack St;
    St.Top = -1;
    int Choose, Item;
    while(1){
        printf("Enter choice \n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        scanf("%d", &Choose);
        switch(Choose){
            case 5: return;
            case 4:
                if (IsEmpty(&St)){
                    printf("Stack is empty\n");
                    break;
                }
                Display(&St);
                break;
            case 3:
                if (IsEmpty(&St)){
                    printf("Stack is empty\n");
                    break;
                }
                Item = Peek(&St);
                printf("Top element: %d\n", Item);
                break;
            case 2:
                if (IsEmpty(&St)) {
                    printf("Underflow\n");
                    break;
                }
                Item = Pop(&St);
                printf("Popped element: %d\n", Item);
                break;

            case 1:
                if (IsFull(&St)){
                    printf("Overflow\n");
                    break;
                }
                printf("Input the element\n");
                scanf("%d", &Item);
                Push(&St, Item);
                break;
        }
    }

}

void Push(Stack *stack, int value){
    stack->S[++stack->Top] = value;
}
void Display (Stack *stack){
    int i;
    for(i=stack->Top;i>=0;i--){
        printf("    %d\n",stack->S[i]);
    }
}
int Pop(Stack *stack){
    return stack->S[stack->Top--];
}

int Peek(Stack *stack){
    return stack->S[stack->Top];
}

Boolean IsEmpty(Stack *stack){
    return stack->Top < 0;
}
Boolean IsFull(Stack *stack){
    return (stack->Top >= MAX - 1);
}