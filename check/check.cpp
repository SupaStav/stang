#include "stang.h"

configpkg check (int argc, char* argv[])
{
    configpkg pkg;
    if(argc == 0) {
        printf("Not enough arguments.");
        pkg.clarif = FAIL;
        return pkg;
    }

    if(argc == 1) {
        
    }
}