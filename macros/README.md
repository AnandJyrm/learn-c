## Stringizing operator (`#`)

The number sign operator `#` causes the argument to macro to be enclosed in double quotes

## Token-pasting operator (`##`)

The double number sign operator `##` contatenates two tokens in a macro invocation in a macro definition

```c
#include <stdio.h>

#define concat(a,b) a##b

int main() {
    int xy = 20;
    printf("%d", concat(x, y));
    return 0;
}
```
