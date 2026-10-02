#include <stdio.h>

int main()
{
#ifdef _WIN32
    printf("Operating System: Windows\n");
#elif defined(__linux__)
    printf("Operating System: Linux\n");
#elif defined(__APPLE__)
    printf("Operating System: macOS\n");
#else
    printf("Operating System: Unknown\n");
#endif

    printf("Program executed successfully.\n");

    return 0;
}
