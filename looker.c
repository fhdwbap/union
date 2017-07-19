
/*
   looker.c: union types in C
   fhdwbap 2017
*/

#include <stdio.h>
#include <stdlib.h>

struct char4
{
    char a, b, c, d;
};

union looker
{
    struct char4 c4;
    int intvalue;
};

int main(void)
{
    union looker looker;
    
    looker.intvalue = 'F' * 256*256*256 + 'H' * 256*256 + 'D' * 256 + 'W';
    
    printf("as intvalue:   %d \n", looker.intvalue);
    printf("as characters: %c %c %c %c \n",
        looker.c4.d, looker.c4.c, looker.c4.b, looker.c4.a);
    printf("addresses:     %08x %08x %08x %08x \n",
        &looker.c4.a, &looker.c4.b, &looker.c4.c, &looker.c4.d);
    
    return EXIT_SUCCESS;
}

/* The output of this program: 

as intvalue:   1179141207 
as characters: F H D W 
addresses:     0022ff74 0022ff75 0022ff76 0022ff77 

*/
