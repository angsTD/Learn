#include <stdio.h>
#include <stdint.h>
#include <string.h>



void memmv(void* destination, const void* source, size_t num)
{

    uint8_t* sptr = (uint8_t*)source;
    uint8_t* dptr = (uint8_t*)destination;
    size_t count = num;

    typedef unsigned long long word;

    printf("src:%p, dest:%p\n",sptr,dptr);

    /*The destination address is behind the source address*/
    if(sptr > dptr)
    {
        while(count)
        {
            printf("s:%u,d:%u",*sptr,*dptr);

            *dptr = *sptr;
            dptr++;
            sptr++;
            count--;
        }
    }
    else
    {
        dptr += num-1;
        sptr += num-1;

        /*copy until the memory addres is Aligned*/
        // uint8_t alignbytes = 

        // memmove()

        while(count)
        {
            /*start copying from the end*/

            *dptr = *sptr;
            dptr--;
            sptr--;
            count--;
        }
    }
    
}

int main(int argc, char* argv)
{

    uint8_t A[]={1,2,3,4,5,6,7,8};
    uint8_t* B = A;

    memmv((void*)B,(void*)(A+4),4);
    printf("\n");

    for(uint8_t idx=0; idx<sizeof(A);idx++)
    {
        printf("[%u]",B[idx]);
    }
    printf("\n");

}