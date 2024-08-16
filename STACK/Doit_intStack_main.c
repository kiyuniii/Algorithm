#include <stdio.h>
#include "Doit_intStack.h"

int main() {
    intStack stack;
    if(initialize(&stack, 64) == -1) {
        puts("Fail to make a STACK");
        return 1;
    }

    while(1) {
        int command, value;
        printf("data : %d / %d\n", Size(&stack), Capacity(&stack));
        printf("(1)Push (2)Pop (3)Peek (4)Print (5)Terminate ");
        scanf("%d", &command);

        if(command == 0) break;

        switch(command) {
        case 1:
            printf("data: ");
            scanf("%d", &value);
            if(Push(&stack, value) == -1)
                puts("an ERROR occured: PUSH");
            break;
        case 2:
            if(Pop(&stack, &value) == -1)
                puts("an ERROR occured: POP");
            else
                printf("POP: %d", value);
            break;
        case 3:
            if(Peek(&stack, &value) == -1)
                puts("an ERROR occured: Peek");
            else
                printf("Peek: %d", value);
            break;
        case 4:
            Print(&stack);
            break;
        }
    }
    Terminate(&stack);
    return 0;
}
