#pragma once

struct configpkg{
    enum {
        FAIL = -1,
        RUN = 0,
        DEBUG = 1

    };
    char* filename;
    int clarif = FAIL;
};