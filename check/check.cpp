#include "../stang.h"

configpkg check (int argc, char* argv[])
{
    configpkg pkg;
    if(argc <= 3) {
        printf("Not enough arguments.\n");
        return pkg;
    }

    if(argc > 3) {
        for (int i = 0; i < argc; i++)
        {
            if(pkg.clarif == pkg.FAIL)
            {
                if(strcmp(argv[i], "-r") == 0)
                    {pkg.clarif = pkg.RUN;}
                if(strcmp(argv[i], "-d") == 0)
                    {pkg.clarif = pkg.DEBUG;}
            }
            if(strcmp(argv[i], "-f") == 0)
            {
                pkg.filename = argv[i+1];
            }
        }
        if(pkg.clarif == pkg.FAIL)
            printf("Couldn't resolve process. Please Clarify with '-r' or '-d'\n");
    }

    return pkg;
}