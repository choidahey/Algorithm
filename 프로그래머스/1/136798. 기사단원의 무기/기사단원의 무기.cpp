// 1~num까지의 약수의 개수를 다 더해서 return
// 근데 ? limit < 각 개수 이면 개수에는 2 추가

#include <string>
#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0;
    
    for (int i = 1; i <= number; i++)
    {
        int count = 1;
        for (int j = 1; j <= i/2; j++)
            if (i % j == 0)
                count++;
        if (count > limit)
            answer += power;
        else
            answer += count;
    }
    
    return answer;
}