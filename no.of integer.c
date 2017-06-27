#include <stdio.h>
int main()
{
    long long i;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%lld", &i);

    while(i != 0)
    {
        // i = i/10
        i /= 10;
        ++count;
    }

    printf("Number of digits: %d", count);
}

