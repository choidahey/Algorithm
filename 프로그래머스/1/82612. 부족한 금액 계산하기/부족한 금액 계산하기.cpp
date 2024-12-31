using namespace std;

long long solution(int price, int money, int count)
{
    long long sum = 0;
    long long answer = 0;

    for (int i = 1; i <= count; i++)
    {
        sum += price * i;
    }

    if (sum <= money)
    {
        return 0;
    }

    answer = sum - money;


    return answer;
}