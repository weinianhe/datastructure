#include <stdio.h>
#include "Stack.h"
int main() {
    Stack st;
    st.Top = -1;
    printf("Hello, World!\n");
    Push(&st,12);
    Push(&st,1);
    Display(&st);
    return 0;
}