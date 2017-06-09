#include <stdlib.h>
#include "sub.h"

static void somefunc() {
    free(malloc(1));
}

void unused_non_static() {
    somefunc();
}

// Since this does not call the unsafe version of "somefunc" main is safe in
// this example.
void sub() {
}
