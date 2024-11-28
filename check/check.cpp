#include "../stang.h"

configpkg check (int argc, char* argv[])
{
    configpkg pkg;
    if(argc <= 3) {
        printf("Not enough arguments.\n");
        pkg.clarif = FAIL;
        return pkg;
    }

    if(argc > 3) {
        for (int i = 0; i < argc; i++)
        {
            if(pkg.clarif == FAIL)
            {
                if(strcmp(argv[i], "-r") == 0)
                    {pkg.clarif = RUN;}
                if(strcmp(argv[i], "-d") == 0)
                    {pkg.clarif = DEBUG;}
            }
            if(strcmp(argv[i], "-f") == 0)
            {
                pkg.filename = argv[i+1];
            }
        }
        if(pkg.clarif == FAIL)
            printf("Couldn't resolve process. Please Clarify with '-r' or '-d'\n");
    }

    return pkg;
}