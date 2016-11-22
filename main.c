#include <stdio.h>
#include "db_wrapper/db_wrapper.h"

int main()
{
    _init_();
    add("Yuriy Shpinyov", 19, true);
    add("Drty", 19, false);
    add("Sanyochek", 20, true);
    print();

    return 0;
}
