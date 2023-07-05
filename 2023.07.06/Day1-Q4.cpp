#include <stdio.h>
#define LEN_INPUT 20

int main()
{
    char str[100];
    int i = 0;

    scanf("%[^\n]", str);

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            printf("%c", str[i] - 32);
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            printf("%c", str[i] + 32);
        }
        else
        {
            printf("%c", str[i]);
        }

        i++;
    }

    return 0;
}
