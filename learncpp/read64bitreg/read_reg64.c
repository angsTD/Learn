#include <stdio.h>
#include <stdint.h>
#include <string.h>

uint64_t reg0 = 0x123456789ABCDEF0;

uint32_t readreg32(uint32_t offset)
{

    uint32_t reg = 0;
    memcpy((void*)(&reg),((void*)&reg0)+4*offset,4);
    return reg;
}

uint64_t readreg64()
{
    uint64_t reg;
    reg = readreg32(1);
    reg = reg << 32 ;
    reg = reg|(readreg32(0));
    return reg;
}

int main()
{
    uint64_t res = readreg64();
    printf("Reg = 0x%02x%02x\n",reg0>>32,reg0);
    printf("Reg64 = 0x%08x%08x\n",res>>32,res);
}