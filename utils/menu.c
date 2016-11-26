#include <stdio.h>
#include <ctype.h>
#include <windows.h>
#include "utils.h"
#include "../db_wrapper/db_wrapper.h"

short int menu()
{
    int ans = -1;

    do
    {
        printf("Select one of the next actions:\n\n");
        printf(" 1) Add new data\n 2) Show recently added\n 3) Write into db\n 0) Exit\n\nAnswer here: ");
        fflush(stdin);
        scanf("%d", &ans);
        printf("\n");
        if (!isdigit(ans)) continue;
    }
    while (ans < 0 || ans > 3);

    switch(ans)
    {
    case 1:
        input();
        break;
    case 2:
        print();
        break;
    case 3:
        printf("3 Under construction...\n\n");
        break;
    case 0:
        return 1;
    default:
        printf("ERROR! default is working\n\n");
    }

    system("pause");
    system("cls");

    return 0;
}

