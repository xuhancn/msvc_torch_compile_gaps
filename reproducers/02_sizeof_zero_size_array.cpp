#include <cstdint>
#include <stdio.h>

void repo_sizeof_zero_size_array()
{
    static constexpr int64_t int_array_2[] = {};
    int i_size = sizeof(int_array_2);
    printf("Zero array size is: %d.\n", i_size);
}
