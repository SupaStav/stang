//ENTRY POINT
#include "stang.h"

int main(int argc, char* argv[])
{
    configpkg pkg = check(argc, argv);
    if(pkg.clarif == pkg.FAIL)
        return -1;

    //Debugging must run every time regardless of what the clarification is.
    debug(pkg);

    if(pkg.clarif == pkg.RUN)
    {
        run(pkg.filename);
    }

    return 0;
}