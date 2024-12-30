#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    long long n = num;
    int answer = 0;
    bool flag = true;

    while (flag == true)
    {
        if (answer >= 500)
        {
            return -1;
        }
        
        if (n == 1)
        {
            return answer;
        }
        
        if (n % 2 == 0)
        {
            n = n / 2;
            answer += 1;
        }
        else if (n % 2 != 0)
        {
            n = n * 3 + 1;
            answer += 1;
        }

        
    }
}