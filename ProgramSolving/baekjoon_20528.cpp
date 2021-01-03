/*
문제출처: https://www.acmicpc.net/problem/20528
문제정의: N개의 Palindrome 문자열이 주어져서 그 문자열을 모두 사용했을 때 끝말잇기를 할 수 있는가? 
*/
#include <iostream>
using namespace std;

int palindrome[26];

int main(void)
{
    int n;
    char tmp[101];
    int count = 0;

    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%s", tmp);
        palindrome[tmp[0]-'a']++;
    }

    for(int i=0; i<26; i++)
    {
        count += palindrome[i];
    }
    if(count == n)
        printf("%d\n",1);
    else
        printf("%d\n", 0);

    return 0;
}