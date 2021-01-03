/*
문제출처: https://www.acmicpc.net/problem/2839
문제정의: 설탕 Nkg을 3kg 봉지와 5kg봉지로 배달하되 최대한 적은 봉지로 배달하려고 한다. 그 봉지의 개수를 구하라.
주의점: 3 <= N <= 5000
    3과 5로 정확하게 Nkg을 나타낼 수 없다면 -1 출력 
1. 함수정의: 설탕 무게 N을 input으로 넣으면 최소 배달 봉지를 output
2. 점화식정의: f(x)=f(x-1)+5 || f(x)=f(x-1)+3
    5kg봉지가 많으면 많을수록 배달 봉지는 적어짐
3. Base case 정의: 
*/
#include <cstdio>

int main(void)
{
    int n, i;
    int count = 0;
    scanf("%d", &n);

    while (n>0)
    {
        if(n%5 == 0)
        {    n -= 5; count++; }
        else if(n%3 == 0)
        {   n -= 3; count++;}
        else if(n-5 > 0)
        {    n -= 5; count++;}
        else if(n-3 > 0)
        {    n -= 3; count++;}
        else    n = -1;
    }
    if(n == 0)
        printf("%d", count);
    else
        printf("%d", -1);

    return 0;
}