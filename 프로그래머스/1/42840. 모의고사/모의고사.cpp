#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> score;
    vector<int> result;
    
    vector<int> supo1 = {1, 2, 3, 4, 5};
    vector<int> supo2 = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> supo3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    
    int score1 = 0;
    int score2 = 0;
    int score3 = 0;
    
    // 각 수포자 답과 answers 비교 - 총 3번
    for (int i = 0; i < answers.size(); i++){
        if (supo1[i % supo1.size()] == answers[i])  // 답의 갯수가 15개일 때 supo들의 답이 저장된 배열의 크기 때문에
            score1++;
        
        if (supo2[i % supo2.size()] == answers[i])
            score2++;
        
        if (supo3[i % supo3.size()] == answers[i])
            score3++;
        
    }
    score.push_back(score1);
    score.push_back(score2);
    score.push_back(score3);
    
    
    // 가장 많은 문제를 맞춘 score 출력
    int high_score = *max_element(score.begin(), score.end());
    
    // 문제 많이 맞춘 사람의 위치 출력
    for (int k = 0; k < score.size(); k++){
        if (score[k] == high_score){
            result.push_back(k + 1);  // 1부터 출력하려고
        }
    }
    
    return result;
}