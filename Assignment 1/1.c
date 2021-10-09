#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    scanf("%s",a);
    int count = 0;
    int length = strlen(a);
    for (int i = 0; i < length; i++)
    {
        if(a[i] == '.')
            count++;
    }
    if(count != 1 || a[length - 1] =='.')
        printf("Invalid");
    else
        printf("Valid");
    return 0;
}