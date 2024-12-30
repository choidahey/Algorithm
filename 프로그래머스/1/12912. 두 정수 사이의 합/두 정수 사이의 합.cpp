#include <string>
#include <vector>
#include <iostream>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    int A = a > b ? b : a;
    int B = a > b ? a : b;
    
    for (int i = A; i <= B; i++)
    {
        answer += i;
    }
    
    return answer;
}