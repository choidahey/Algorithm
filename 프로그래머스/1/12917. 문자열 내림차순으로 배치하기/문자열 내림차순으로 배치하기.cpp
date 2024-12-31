// 문자열 정수로 변환
// 정렬
// 다시 문자열로 변환

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    
    sort(s.begin(), s.end(), greater<>());
    
    for (int i = 0; i < s.size(); i++)
    {
        answer += s[i];
    }
    
    return answer;
}