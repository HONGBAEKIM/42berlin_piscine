#ifndef FT_BOOLEAN.H
#define FT_BOOLEAN.H

#include <unistd.h>

#define EVEN_MSG    "I I have an even number of arguments.\n"
#define ODD_MSG    "I I have an odd number of arguments.\n"
#define EVEN(x)     x % 2 == 0
#define SUCCESS     0
#define TRUE        1
#define FALUE       0

typedef int     t_bool;

#endif