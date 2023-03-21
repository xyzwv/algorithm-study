# include<stdio.h>
# include<string.h>


int main() {
    int n;
    char str[100];
    int sum=0;
    scanf("%d", &n);
    scanf("%s", &str);
    for (int i = 0; i < n; i++)
        sum += str[i] - '0';  //문자형 숫자에서 '0'을 빼면 해당 정수를 얻을 수 있다.
    printf("%d\n", sum);
    return 0;
}