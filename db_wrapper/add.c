#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "db_wrapper.h"

void add(char *f_name, int age, bool h_edu)
{
    if (last == NULL)
    {
        first = malloc(sizeof(Person));
        last = first;
    }
    else
    {
        last->next = malloc(sizeof(Person));
        last = last->next;
    }
    strcpy(last->full_name, f_name);
    last->age = age;
    last->higher_edu = h_edu;
    last->next = NULL;
}
