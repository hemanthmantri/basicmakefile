#include <stdint.h>
#include "dependency.h"

// Demo for CI Pipeline autofix
int main(void)
{
    uint8_t foo = 5; /* unused variable */
    dependency();
    return 0;
}
