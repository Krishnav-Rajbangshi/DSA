#include "stdio.h"

int unit_digit(int num)
{
    return num % 10;
}

int tenth_digit(int num)
{
    return num / 10;
}

void copy_array(int *arr, int *brr, int n)
{
    for (int i = 0; i < n; i++)
        arr[i] = brr[i];
}

void print_array(int *arr, int n)
{
    int x = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0 && x)
            continue;
        else
            x = 0;
        printf("%d", arr[i]);
    }
}
void fibonacci(int n, int size)
{
    int a[size], b[size], c[size];

    for (int i = 0; i < size; i++)
    {
        a[i] = 0;
        b[i] = 0;
        c[i] = 0;
    }
    b[size - 1] = 1;

    int carry;

    for (int i = 1; i < n; i++)
    {
        carry = 0;

        for (int j = size - 1; j >= 0; j--)
        {
            int add_term = a[j] + b[j] + carry;
            int ones = unit_digit(add_term);
            c[j] = ones;

            carry = tenth_digit(add_term);
        }

        copy_array(a, b, size);
        copy_array(b, c, size);
    }
    print_array(c, size);
}

int main()
{

    int n, size = 5000;
    scanf("%d", &n);

    if (n > 0)
        fibonacci(n, size);
    return 0;
}
