#include <stdlib.h>
#include "sub.h"

static void somefunc() {
    free(malloc(1));
}

void sub() {
    somefunc();
}
