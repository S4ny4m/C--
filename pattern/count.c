#include <stdio.h>
void sortit(int a[], int n)
{
    int i = 0, j = 0, temp = 0;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
void display(int a[], int n)
{
    int i = 0;
    for (; i < n; i++)
        printf("%d ", a[i]);
}
void duplicate(int a[], int n)
{
    int i = 0, j = 0, last = 0, count;
    for (i = 0; i < n; i+=count)
    {
        count = 1;
        for (j = i; (a[j] == a[j + 1]); j++)
            {
            count++;
            // printf("dupilicae,%d\n",a[j]);
            }

        printf("%d is %d times\n", a[i], count);
        last = a[i];
    }
    // display(a, n);
}
int main()
{
    int n;
    printf("Enter the size of array: \n");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements of array: \n");
    int i = 0, j = 0;
    for (; i < n; i++)
        scanf("%d", &a[i]);
    sortit(a, n);
    printf("\nsorted array:");
    display(a, n);
    printf("\n\n");
    duplicate(a, n);
    printf("EASYYYYY ;)");
}