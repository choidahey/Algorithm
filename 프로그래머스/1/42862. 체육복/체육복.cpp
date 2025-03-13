#include <string>
#include <vector>
#include <iostream>

using namespace std;

int student[30];  // 얘를 메인 함수보다 위에 쓰는 이유는 뭘까?

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    
    // lost의 체육복 갯수
    for (int i = 0; i < lost.size(); i++)
    {
        student[lost[i]]--;
    }
    
    // reserve 체육복 갯수
    for (int i = 0; i < reserve.size(); i++)
    {
        student[reserve[i]]++;
    }
    
    for (int i = 1; i <= n; i++)
    {
        if (student[i] == -1)
        {
            if (student[i - 1] == 1)
            {
                student[i - 1] = 0;
                student[i] = 0;
            }
            else if (student[i + 1] == 1)
            {
                student[i + 1] = 0;
                student[i] = 0;
            }
        }
        
        if (student[i] >= 0)
        {
            answer++;
        }
    }
    
    
    return answer;
}