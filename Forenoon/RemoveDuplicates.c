#include <stdio.h>
void remove_duplicates(int a[], int n)
{
    int j=0;
    for (int i=1; i<n; i++)
    {
        if (a[i] != a[j])
        {
            j++;
            a[j] = a[i];
        }
    }
    printf ("%d\n", j+1);
    for (int i=0; i<=j; i++)
        printf ("%d ", a[i]);
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
