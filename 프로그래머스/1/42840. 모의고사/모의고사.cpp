// 각 학생별 찍는 방식 설정
// answer 순회하면서 

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> student1 = { 1, 2, 3, 4, 5 };
    vector<int> student2 = { 2, 1, 2, 3, 2, 4, 2, 5 };
    vector<int> student3 = { 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 };
    vector<int> count = { 0, 0, 0 };
    
    for (int i = 0; i < answers.size(); i++)
    {
        if (answers[i] == student1[i%student1.size()]) { count[0]++; }
        if (answers[i] == student2[i%student2.size()]) { count[1]++; }
        if (answers[i] == student3[i%student3.size()]) { count[2]++; }
    }
    
    int max_value = *max_element(count.begin(), count.end());
    
    for (int j = 0; j < count.size(); j++)
    {
        if (count[j] == max_value) { answer.push_back(j+1); }
    }
    
    sort(answer.begin(), answer.end());
    
    return answer;
}