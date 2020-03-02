#include <stdio.h>
#include <stdlib.h>
#include "head.h"

int main() {
    node_t *head = NULL;
    AF(&head, 5);
    PRINT_ALL(head);

    AF(&head, 6);
    PRINT_ALL(head);

    AF(&head, 21);
    PRINT_ALL(head);

    AL(&head, 12);
    PRINT_ALL(head);

    DF(&head);
    PRINT_ALL(head);

    DL(head);
    PRINT_ALL(head);

    DE(&head, 3);
    PRINT_ALL(head);

    DE(&head, 6);
    PRINT_ALL(head);

    AF(&head, 2);
    PRINT_ALL(head);

    AL(&head, 200);
    PRINT_ALL(head);

    PRINT_ALL(head);

    AF(&head, 1);
    PRINT_ALL(head);

    DOOM_THE_LIST(&head);

    DL(head);
    PRINT_ALL(head);

    AF(&head, 42);
    PRINT_ALL(head);

    AL(&head, 24);
    PRINT_ALL(head);

    AF(&head, 9);
    PRINT_ALL(head);

    PRINT_ALL(head);
    return 0;
}