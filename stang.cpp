//ENTRY POINT
#include "stang.h"

int main(int argc, char* argv[])
{
    configpkg pkg = check(argc, argv);
    if(pkg.clarif == FAIL)
        exit(-1);

    
}