#include <stdio.h>
#include "db_wrapper/db_wrapper.h"
#include "utils/utils.h"

int main()
{
    _init_(); // necessary function

    printf("Hello in Chameleon v1.o!\n\n");

    add("Yuriy Shpinyov", 19, true);
    add("Dtry Sverepuy", 19, false);
    add("Sanyochek Volnuy", 20, true);

    while (!menu());

    free_mem(first);

    return 0;
}
