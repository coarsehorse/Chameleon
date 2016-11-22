#include <stdio.h>
#include "db_wrapper.h"

void print()
{
    Person *temp = first;

    while (temp)
    {
        printf("%s is %d years old", temp->full_name, temp->age);
        printf(temp->higher_edu ? ". Certified specialist\n" : "\n");
        temp = temp->next;
    }
}
