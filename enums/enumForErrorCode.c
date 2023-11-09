#include <stdio.h>

enum ErrorCodes
{
    OK = 0,
    FILE_NOT_FOUND = 1,
    PERMISSION_DENIED = 2,
    INVALID_INPUT = 3
};

int main()
{
    enum ErrorCodes result = FILE_NOT_FOUND;

    if (result == OK)
    {
        printf("Operation successful.\n");
    }
    else
    {
        printf("Error code: %d\n", result);
    }

    return 0;
}
