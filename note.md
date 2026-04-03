# Note For C Learning

### Format Specifier

Special tokens that begin with % symbol, followed by a character that specifies the data type
and optional modifiers (width, precision, flags). They control
how data is displayed or interpreted

### Function prototype

Provide the compiler information about a function's name, return type, and parameters before it actual definition.
Enables type checking and allow function to be used before they're defined

### Calloc - Contiguous Allocation

Unlike `malloc` the `calloc` function allocates memory dynamically and sets all bytes to 0. It takes in two arguments `size_t, size_t`: Number of elements and size of each element.
