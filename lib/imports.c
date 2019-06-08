#include <emscripten.h>
#include <stdio.h>

int main() {
    printf("WASM Ready\n");

    // Call JS function (eval)
    emscripten_run_script("console.log('Hello from C!')");

    return 1;
}

