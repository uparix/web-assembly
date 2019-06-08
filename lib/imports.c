#include <emscripten.h>
#include <stdio.h>

int main() {
    printf("WASM Ready\n");

    // Call JS function (eval)
    emscripten_run_script("console.log('Hello from C!')");
    
    emscripten_async_run_script("alert('Hello from C - ASYNC!')", 2000);

    return 1;
}

