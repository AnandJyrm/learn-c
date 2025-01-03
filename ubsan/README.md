# UBSAN


UndefinedBehaviorSanitizer (UBSan) is a fast undefined behavior detector. UBSan modifies the program at compile-time to catch various kinds of undefined behavior during program execution.
UBSan has an optional run-time library which provides better error reporting. The checks have small runtime cost and no impact on address space layout or ABI. UBSAN does not abort when encountering an error.

## Usage:

```bash
clang -fsanitize=undefined overflow.c

./a.out
overflow.c:6:27: runtime error: signed integer overflow: 2147483647 + 1 cannot be represented in type 'int'
```

## Options:

| option | default | action|
| ------ | ------- | ----- |
| print_stacktrace | 0 | prints stacktrace |
| log_path | stderr | print errors to file |
| halt_on_error | 0 | abort the program on error |

## References:
https://clang.llvm.org/docs/UndefinedBehaviorSanitizer.html
https://blog.regehr.org/archives/213
http://blog.llvm.org/2011/05/what-every-c-programmer-should-know.html
