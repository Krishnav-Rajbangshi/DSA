#include <stdio.h>

int main()
{
    char input[1000];
    scanf("%s", input);
    int i = 0;
    int check = 0;
    int count = 0;
    int x = -1, y = -1;
    while (input[i] != '\0')
    {
        if ((input[i] >= 'A' && input[i] <= 'Z') || (input[i] >= 'a' && input[i] <= 'z') || (input[i] >= '0' && input[i] <= '9'))
            check = 1;
        else if ((input[i] == '.' || input[i] == '-' || input[i] == '_' || input[i] == '@') && (i != 0 && input[i + 1] != '\0'))
            check = 1;
        else
        {
            check = -1;
            break;
        }
        if (input[i] == '@')
        {
            count++;
            x = i;
        }
        if (count > 1)
        {
            check = -1;
            break;
        }
        if (input[i] == '.')
        {
            y = i;
        }
        i++;
    }
    if (y - x < 2)
        check = -1;
    if (check == 1)
        printf("Valid\n");
    else
        printf("Invalid\n");
}