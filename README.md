# carlife

## protobuf-2.5.0

### build steps

    $ source yocto sdk
    $ ./configure
    $ make

build directory: 'CarLife-Vehicle-Lib/protobuf-2.5.0/src/.libs'

- You can remove the program binaries and object files from the source code directory by typing `make clean'.
- To also remove the files that 'configure' created (so you can compile the package for a different kind of computer), type 'make distclean'.

refer to 'CarLife-Vehicle-Lib/protobuf-2.5.0/README.txt'

## CarLife-Vehicle-Lib LibSource

### build steps

    $ source yocto sdk
    $ make verbose=1


build directory: 'CarLife-Vehicle-Lib/LibSource/build'

### source patch for compile success

```
// CTranRecvPackageProcess.cpp
-   #include<coded_stream.h>
+   #include <google/protobuf/io/coded_stream.h>
```