#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <map>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int min_count = 0, max_count = 0;
    map<int, int> score;
    score[6] = 1;
    score[5] = 2;
    score[4] = 3;
    score[3] = 4;
    score[2] = 5;
    score[1] = 6;
    score[0] = 6;

    for (int value : lottos)
    {
        if (value == 0)
            max_count++;

        if (find(win_nums.begin(), win_nums.end(), value) - win_nums.begin() != win_nums.size())
            min_count++;
    }
    max_count+=min_count;
    
    answer.push_back(score[max_count]);
    answer.push_back(score[min_count]);
    
    return answer;
}