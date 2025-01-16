#include <string>
#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> temp;
    int three = 1;
    
    while (n != 0)
    {
        temp.push_back(n % 3);
        n /= 3; 
    }
 
    for (int i = temp.size() - 1; i >= 0; i--)
    {
        answer += temp[i] * three;    
        three *= 3;
    }
    
    return answer;
}