#include <stdio.h>
#include <stdlib.h>
#include "db_wrapper.h"

void free_mem(Person *start)
{
    if (length <= 0) return;
    if (start->next != NULL) free_mem(start->next);
    //printf("Cleaned name: %s length: %i\n", start->full_name, length-1);
    free(start);
    start = NULL;
    length--;
}
