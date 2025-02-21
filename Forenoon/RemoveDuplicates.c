#include <stdio.h>
void remove_duplicates(int a[], int n)
{
    int c=0, distinct[n];
    distinct [c++] = a[0];
    for (int i=1; i<n; i++)
    {
        if (a[i] != a[i-1])
        {
            distinct[c] = a[i];
            c++;
        }
    }
    printf ("%d\n", c);
    for (int i=0; i<c; i++)
        printf ("%d ", distinct[i]);
    printf ("\n");
}
int main()
{
    int test;
    scanf ("%d", &test);
    while (test--)
    {
        int n;
        scanf ("%d", &n);
        int a[n];
        for (int i=0; i<n; i++)
            scanf ("%d", &a[i]);
        remove_duplicates (a, n);
    }
}
