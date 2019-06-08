## Commands

```emcc lib/demo.c -s WASM=1 -O2 -o public/demo.js```

```-O(n) ==> Optimization Level```

```emcc lib/demo.c -s WASM=1 -s SIDE_MODULE=1 -o public/demo.wasm```


```--post-js public/ready.js```
```--pre.js  public/before.js```


## Resources

WASM Fiddle

https://wasdk.github.io/WasmFiddle

Web Assembly Studio

https://webassembly.studio/

CMake

https://cmake.org/

```export PATH="/Applications/CMake.app/Contents/bin":"$PATH"```

emscrypten

https://emscripten.org/

```
# Download and install the latest SDK tools.
./emsdk install latest

# Make the "latest" SDK "active" for the current user. (writes ~/.emscripten file)
./emsdk activate latest

# Activate PATH and other environment variables in the current terminal
source ./emsdk_env.sh
```

X-Code

```xcode-select --install```

