#include <stdio.h>
#include <ctype.h>
#include <windows.h>
#include "utils.h"
#include "../db_wrapper/db_wrapper.h"

void input()
{
    int recordCounter = 0;

    while (1) // Works until the user presses exit
    {
        char str[2];

        if (recordCounter < 1) // The first time is not asking
            strcpy(str, "y");
        else {
            do {
                printf("Add new entry?(y/n): ");
                fflush(stdin);
                scanf("%1s", str);
            } while (strcmp(str, "y") && strcmp(str, "n")); // check is y/n
            printf("\n");
        }

        if (!strcmp(str, "n")) {
            break;
        }
        else if (!strcmp(str, "y")) {
            char name[40] = { 0 },
                 age[4] = { 0 },
                 h_e[2] = { 0 };

            printf("Enter full name: ");
            fflush(stdin);
            scanf("%39s", name);
            do {
                printf("Enter the age: ");
                fflush(stdin);
                scanf("%3s", age);
            } while (!isdigit(age[0])); // check is digit
            do {
                printf("Higher education(+/-): ");
                fflush(stdin);
                scanf("%1s", h_e);
            } while (strcmp(h_e, "+") && strcmp(h_e, "-")); // check is conditional symbol
            printf("\n");

            add(name, atoi(age), !strcmp(h_e, "+") ? true : false); // create new record
            recordCounter++;
            continue;
        }
        else {
            printf("Error in the input, try again\n");
            continue;
        }
    }
}
