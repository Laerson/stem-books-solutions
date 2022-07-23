#include <stdint.h>
#include <stdio.h>

int main(void) 
{
    typedef int8_t Int8;
    typedef int16_t Int16;
    typedef int32_t Int32;

    printf("%zu %zu %zu\n", sizeof(Int8), sizeof(Int16), sizeof(Int32));

    return 0;

}
