#ifndef DB_WRAPPER
#define DB_WRAPPER
#define bool char
#define true 1
#define false 0

typedef struct Person {
    struct Person *next;
    char full_name[40];
    int age;
    bool higher_edu;
} Person;

Person *first, *last;
int length;

void _init_();
void add(char *f_name, int age, bool h_edu);
void print();
void free_mem(Person *start);

#endif // DB_WRAPPER
