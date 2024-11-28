#pragma once

enum {
    FAIL = -1,
    RUN = 0,
    DEBUG = 1

} clarifier;

struct configpkg{
    char* filename;
    int clarif = FAIL;
};