#include <stdio.h>
#include <limits.h>

#define INT printf("int %%d %-10d %-10d %%u %u \n", INT_MAX, INT_MIN, UINT_MAX );
#define CHAR printf("char %%d %-10d %-10d %%u %u \n", CHAR_MAX, CHAR_MIN, UCHAR_MAX );
#define LONG printf("long %%ld %-10d %-10d %%u %u \n", LONG_MAX, LONG_MIN, ULONG_MAX );
#define SHORT printf("short %%d %-10d %-10d %%u %u \n", SHRT_MAX, SHRT_MIN, USHRT_MAX );
#define LONG_LONG printf("long long %%lld %-10d %-10d %%u %u \n", LLONG_MAX, LLONG_MIN, ULLONG_MAX );
int main(){
    INT
    CHAR
    LONG
    SHORT
    LONG LONG
    return 0;
}