#include <string>
#include <vector>
#include <iostream>
#include <unordered_set>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    
    unordered_set<char> skipSet(skip.begin(), skip.end()); // skip 문자를 빠르게 확인하기 위한 set

    for (char c : s) {
        int count = 0; // 실제로 유효한 문자만 index만큼 더하기 위해 카운트
        while (count < index) {
            c++; // 한 칸 이동
            if (c > 'z') c = 'a'; // z 넘어가면 다시 a부터

            if (skipSet.find(c) == skipSet.end()) { // skip 문자에 없으면 유효한 문자로 카운트 증가
                count++;
            }
        }
        answer += c;
    }

    return answer;
}