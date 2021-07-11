# Bazel clang cpp example

Here is a summary of what I learned while using bazel build system with cpp & clang 12.

I have compiled in WSL2 with Clang-12.

## Build

Build with Clang-12.

```console
cpp-tutorial/stage1$ bazel build --config=clang_config  //main:hello-world
```

## Test

And Testing with [uftrace](https://docs.bazel.build/versions/main/install-ubuntu.html) and [valgrind](https://sourceware.org/git/valgrind.git).

### uftrace

Testring with uftrace in terminal.

```console
cpp-tutorial/stage1$ uftrace ./bazel-bin/main/hello-world
```
### valgrind

Testring with valgrind in terminal.

```console
cpp-tutorial/stage1$ valgrind ./bazel-bin/main/hello-world
```

[Installing Bazel on Ubuntu](https://docs.bazel.build/versions/main/install-ubuntu.html)

[Bazel Tutorial: Build a C++ Project](https://docs.bazel.build/versions/main/tutorial/cpp.html)

[Bazel Tutorial: Configure C++ Toolchains](https://docs.bazel.build/versions/main/user-manual.html).

[Bazel command line options](https://docs.bazel.build/versions/main/user-manual.html).
