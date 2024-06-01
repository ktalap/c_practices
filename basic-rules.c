#include <stddef.h>

// [1]
// We bind type qualifiers and modifiers to the left
char *name;
char const *const path_name;

// [2]
// We do not use continued declarations, it's confusing
// In this case scenario, b is not a constant pointer
unsigned const *const a, b;

// [3]
// We use array notation for pointer parameters
// The static keyword here says the pointer must be non-null
size_t strlen(char const str[static 1]);
// Here the +1 is for the one null pointer that terminates the array
// Notice we don't enforce non-null property anymore
int main(int argc, char *argv[argc + 1]);
// These are the compatible equivalents we deem unsafe, they can be null
size_t strlen(const char *string);
int main(int argc, char **argv);

// [4]
// We use function notation for function pointer parameters
// This emphasizes that the handler argument cannot be null
int atexit(void handler(void));
// This is the compatible equivalent we deem unsafe, it can be null
int atexit(void (*handler)(void));

// [5]
// We define variables as close to their first use as possible