#include <stdio.h>

int main()
{
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // safe input

    // Remove newline added by fgets, if any
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

    // Toggle case logic
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;  // Upper → Lower
        else if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;  // Lower → Upper
    }

    printf("Toggle case conversion of the given series is: %s\n", str);
    return 0;
}
