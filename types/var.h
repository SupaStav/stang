#pragma once

#include "../stang.h"

enum vartype
{
    VAR_INT = 0,
    VAR_CHAR = 1,
    VAR_FLOAT = 3,
    VAR_STRING = 4
};

struct variable
{
    void *data; //this is dangerous
    int vartype; //of enum vartype
};