// 12 6
// vector 2개로 a사람꺼 채우고 b 사람꺼 채우고
// answer는 a사람 + 물 + b 사람
// food를 돌면서 음식 몇개 쓸 건지 결정
// 음식 결정되면, 총 음식 수 % 2해서 각 문자열 크기 지정


#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    string a_person = "";  // 0 ~ 5
    int temp = 0;  // 전체 음식 수
    
    for (int i = 1; i < food.size(); i++)
    {
        temp = food[i] / 2;
        if (temp > 0)
        {
            for (int j = 0; j < temp; j++)
            {
                a_person += to_string(i);
            }
            
        }
    }
    answer += a_person;
    answer += to_string(0);
    reverse(a_person.begin(), a_person.end());
    answer += a_person;
    
    return answer;
}