// 점수를 저장하는 공간의 크기가 3이하이면 그냥 저장.
// k보다 인덱스가 클 때는? 저장된 fame을 돌면서 score[i]와 비교,
// 그리고 k번째의 인덱스 answer에 push_back

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> fame;
    
    
    for (int i = 0; i < score.size(); i++)
    {
        // i가 k보다 작을 때, 다 넣음
        if (fame.size() < k)
        {
            fame.push_back(score[i]);
            sort(fame.begin(), fame.end(), greater<>());
            answer.push_back(fame.back());
        }
        // i가 k보다 클 때, 이제부터 상위 애들 k만 넣음
        else
        {
            int min = *min_element(fame.begin(), fame.end());
            int min_index = min_element(fame.begin(), fame.end()) - fame.begin();
            if (min < score[i])
            {
                fame.erase(fame.begin() + min_index);
                fame.push_back(score[i]);
            }
            sort(fame.begin(), fame.end(), greater<>());
            answer.push_back(fame.back());
        }
    }
    
    return answer;
}