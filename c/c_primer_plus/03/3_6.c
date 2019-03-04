/*可移植整数类型名*/
#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    int32_t me32;
    me32 = 45933945;
    printf("First, assume int32_t is int: ");
    printf("Next, let's not make any assumptions.\n");
    printf("Instead, use a \"macro\" from inttypes.h: ");
    printf("me32 = %" PRId32 "\n", me32);

    return 0;
}