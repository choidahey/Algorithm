// s만큼 반복 돌면서
// 같은 글자 없으면 -1
// 

#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    
    for (int i = 0; i < s.length(); i++)
    {
        int temp = -1;
        for (int j = 0; j < i; j++)
        {
            if (s[i] == s[j])
                temp = i - j;
        }
        answer.push_back(temp);
    }
    
    return answer;
}