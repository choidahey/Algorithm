#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    int start_index = 0;
    int end_index = 0;
    int k_index = 0;
    
    // 원소를 자르는데 필요한 정보들 저장
    for (int i = 0; i < commands.size(); i++)
    {
        vector<int> temp;
        start_index = commands[i][0];
        end_index = commands[i][1];
        k_index = commands[i][2];
        
        // 인덱스 추출
        for (int j = start_index - 1; j < end_index; j++)
        {
            temp.push_back(array[j]);
        }
        
        sort(temp.begin(), temp.end());
        answer.push_back(temp[k_index - 1]);
    }
    
    return answer;
}