#ifndef FUNCTION_POINTERS
#define FUNCTION_POINTERS
#define NULL ((void *)0)
int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif /*FUNCTION_POINTERS*/
