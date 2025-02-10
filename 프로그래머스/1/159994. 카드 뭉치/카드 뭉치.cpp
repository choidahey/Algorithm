// goal의 인덱스를 순차적으로 돌면서 1과 2에 해당 인덱스가 있는지 확인
//

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "";
    
    for (int i = 0; i < goal.size(); i++)
    {
        if (cards1.size() > 0 && goal[i] == cards1[0])
        {
            cards1.erase(remove(cards1.begin(), cards1.end(), goal[i]));
        }
        else if (cards2.size() > 0 && goal[i] == cards2[0])
        {
            cards2.erase(remove(cards2.begin(), cards2.end(), goal[i]));
        }
        else
            return "No";
    }
    
    return "Yes";
}