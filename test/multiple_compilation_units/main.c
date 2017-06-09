#include "sub.h"

// There is another function with this name defined statically in the "sub"
// implementations.
void somefunc() {
}

int main() __attribute__((annotate("realtime"))) {
    somefunc();
    sub();
    return 0;
}
