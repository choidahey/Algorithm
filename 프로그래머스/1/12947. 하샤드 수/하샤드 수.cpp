// x를 10으로 나눠줌 - 18일 때 몫은 1 나머지는 8

#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int sum = 0;
    int init_x = x;
    
    while (x > 0)
    {
        sum += x % 10;
        x = x / 10;
    }
    
    if (init_x % sum == 0) 
        return true;
    else 
        return false;
    
    return answer;
}
