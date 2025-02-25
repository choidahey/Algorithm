#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <unordered_map>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    vector<char> temp;
    unordered_map<char, int> countY;

    // Y의 각 문자 개수 저장
    for (char c : Y) {
        countY[c]++;
    }

    // X의 각 문자를 Y에서 확인 후 temp에 저장
    for (char c : X) {
        if (countY[c] > 0) { // Y에 해당 문자가 있으면
            temp.push_back(c);
            countY[c]--;  // Y에서 사용한 문자 개수 감소
        }
    }

    if (temp.empty()) return "-1";

    sort(temp.begin(), temp.end(), greater<>()); // 내림차순 정렬

    if (temp[0] == '0') return "0"; // "000" 같은 경우를 "0"으로 처리

    for (char c : temp) {
        answer += c;
    }

    return answer;
}
