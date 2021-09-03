#include <stdio.h>
#include <stdint.h>


uint8_t bitrev(uint8_t val)
{
    uint8_t v = val;
    uint8_t count = 8;
    uint8_t rev = 0;
    while(v)
    {
        rev = rev<<1;
        rev = rev|(v&0x01);
        v = v>>1;
        count--;
    }

    if(count)
    {
        rev = rev<<count;
    }
    return rev;
}
int main()
{
    uint8_t val = 0x01;

    printf("val:%u (0x%02x)\n",val,val);

    uint8_t rev = bitrev(val);

    printf("rev:%u (0x%02x)\n",rev,rev);

    return 0;
}