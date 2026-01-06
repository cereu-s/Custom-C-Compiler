#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


// terminal tokens
enum
{
    T_PLUS,
    T_MINUS,
    T_STAR,
    T_SLASH,
    T_INTLIT
};


// token structure
struct Token
{
    int token;
    int intValue;
};