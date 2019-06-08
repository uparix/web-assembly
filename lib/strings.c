#include <emscripten.h>
#include <stdio.h>

char * str = "my string variable";

char * getStr() {
    return str;
}

int main() {
    printf("WASM Ready\n");

    return 1;
}
