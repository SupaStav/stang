#include "../stang.h"
#include "../parse/variable/parsevar.h"

int run(char* epfilename)
{

    //TEST CODE

    variable var = varparse("int hello = 2;");

    printf("%d\n", *(int*)var.data);

    cleanvar(var);


    printf("%d\n", *(int*)var.data);  
    return 0;
    // ---
    //Assume that all debugging has been completed.

    //Parse into command strings
        //Turn command strings into command objects

    //Execute
}