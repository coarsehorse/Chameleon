#include <stdio.h>
#include <stdlib.h>
#include "db_wrapper.h"

void free_mem(Person *start)
{
    if (start->next != NULL) {
        free_mem(start->next);
    }
    printf("Cleaned name: %s\n", start->full_name);
    free(start);
    start = NULL;
}
