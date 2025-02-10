#include <stdint.h>
#include "dependency.h"

// Demo for CI Pipeline autofix
int main(void)
{
    uint8_t foo __attribute__((unused)) = 5; /* intentionally unused variable */
    dependency();
    return 0;
}
