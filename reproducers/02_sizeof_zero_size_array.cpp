#include <cstdint>

void repo_init_zero_size_array()
{
    static constexpr int64_t int_array_2[] = {};
    int i_size = sizeof(int_array_2);
}