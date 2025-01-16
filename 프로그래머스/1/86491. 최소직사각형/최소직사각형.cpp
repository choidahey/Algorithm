// 기본틀 - 가장 큰 sizes[0]와 sizes[1] 곱한 수 리턴
// 근데? 저장한 값 중에서 큰 값을 [0][1] 순서를 바꿨을 때 저장한 값과 한 번 더 비교

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int x = 0;
    int y = 0;
    
    for (int i = 0; i < sizes.size(); i++)
    {
        if (sizes[i][0] > sizes[i][1])
        {
            x = max(x, sizes[i][1]);
            y = max(y, sizes[i][0]);
        }
        else
        {
            x = max(x, sizes[i][0]);
            y = max(y, sizes[i][1]);
        }
            
    }
    
    answer = x * y;
    return answer;
}