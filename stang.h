#pragma once

#include <stdio.h>
#include <stdlib.h>


#include "conf.h"


configpkg check(int argc, char* argv[]);

int debug(configpkg pkg);

int run(char* epfilename);