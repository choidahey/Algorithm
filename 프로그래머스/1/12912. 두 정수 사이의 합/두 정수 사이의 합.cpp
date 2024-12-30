#include <string>
#include <vector>
#include <iostream>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    
    if (a != b)
    {
        if (a > b)
        {
            for (int i = b; i <= a; i++)
            {
                answer += i;
            }
        }
        else
        {
            for (int i = a; i <= b; i++)
            {
                answer += i;
            }
        }
        
    }
    else
        return a;
    
    
    return answer;
}