#include <stdio.h>

int solution(int N, int K)
{
    int result;
        if(K==13)
        {
            K--;
            if(N/K!=0)
            {
                result=N/K;
                result++;
            }
            else
            {
                result=N/K;
            }
        }
        else
        {
            if(N/K!=0)
            {
                result=N/K;
                result++;
            }
            else
            {
                result=N/K;
            }
        }


    return result;
}

int main()
{

    int n, k;
    while (scanf("%d %d", &n, &k) != EOF)
    {
        int result;
        result = solution(n, k);
        printf("%d\n", result);
    }
    return 0;
}
