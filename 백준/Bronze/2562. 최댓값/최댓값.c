#include <stdio.h>

int main()
{
    int max=0;
    int a[9];
    int c=0;

    for(int i=1;i<=9;i++){
    scanf("%d", &a[i]);
    if(a[i]>max)
    {
        max=a[i];
        c=i;
    }
    }
    printf("%d\n%d", max, c);
    return 0;
}
