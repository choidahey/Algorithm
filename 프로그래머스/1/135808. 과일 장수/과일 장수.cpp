#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    int index = 0;
    
    sort(score.begin(), score.end(), greater<>());
    
    for (int i = 0; i < score.size() / m; i++)
    {
        int min_value = *min_element(score.begin() + index, score.begin() + (index + m));
        answer += min_value * m;
        index += m;
    }
    
    return answer;
}