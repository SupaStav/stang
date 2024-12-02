#include "var.h"

void cleanvar(variable var)
{
    free(var.data);
}