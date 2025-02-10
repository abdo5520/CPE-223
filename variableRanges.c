#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    // Print table header
    printf("+----------------+------------------------------+------------------------------+\n");
    printf("| Data Type      | Minimum Value                | Maximum Value                |\n");
    printf("+----------------+------------------------------+------------------------------+\n");

    // Integer types
    printf("| char          | %28d | %28d |\n", CHAR_MIN, CHAR_MAX);
    printf("| unsigned char | %28d | %28u |\n", 0, UCHAR_MAX);
    printf("| short         | %28d | %28d |\n", SHRT_MIN, SHRT_MAX);
    printf("| unsigned short| %28d | %28u |\n", 0, USHRT_MAX);
    printf("| int           | %28d | %28d |\n", INT_MIN, INT_MAX);
    printf("| unsigned int  | %28d | %28u |\n", 0, UINT_MAX);
    printf("| long          | %28ld | %28ld |\n", LONG_MIN, LONG_MAX);
    printf("| unsigned long | %28d | %28lu |\n", 0, ULONG_MAX);
    printf("| long long     | %28lld | %28lld |\n", LLONG_MIN, LLONG_MAX);
    printf("| unsigned long long | %24d | %28llu |\n", 0, ULLONG_MAX);

    // Floating-point types
    printf("| float         | %28.6e | %28.6e |\n", -FLT_MAX, FLT_MAX);
    printf("| double        | %28.6e | %28.6e |\n", -DBL_MAX, DBL_MAX);
    printf("| long double   | %28.6Le | %28.6Le |\n", -LDBL_MAX, LDBL_MAX);

    // Table footer
    printf("+----------------+------------------------------+------------------------------+\n");

    return 0;
}
