#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    string str_n = to_string(n);
    
    sort(str_n.begin(), str_n.end(), greater<>());
    
    answer = stol(str_n);
    
    return answer;
}