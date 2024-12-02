#include "parsevar.h"

variable varparse(char* funcstring)
{
    variable var;
    char** assignment = str_split(funcstring, '=');

    char* value = assignment[1];



    remove_all_chars(value, ' ');


    //TODO : Handle arrays

    //TODO : Handle chars and strings

    //check for datatype
    if(strstr(assignment[0], "int") != NULL)
    {
        //If datatype is an int

        var.vartype = VAR_INT;


        //put it in the heap but dont free it
        int* tmp = (int*)malloc(sizeof(int));
        *tmp = atoi(value);

        var.data = &tmp;

        return var;
    } else if (strstr(assignment[0], "float") != NULL)
    {
        //If datatype is float

        var.vartype = VAR_FLOAT;

        //put it in the heap but dont free it
        float* tmp = (float*)malloc(sizeof(float));
        *tmp = atof(value);

        var.data = &tmp;

        return var;
    }
}