#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    
    for (int i = 0; i < photo.size(); i++)
    {
        int score = 0;
        for (int j = 0; j < photo[i].size(); j++)
        {
            if (find(name.begin(), name.end(), photo[i][j]) != name.end())
            {
                int index = find(name.begin(), name.end(), photo[i][j]) - name.begin();
                score += yearning[index];
            }
        }

        answer.push_back(score);
    }
    
    return answer;
}