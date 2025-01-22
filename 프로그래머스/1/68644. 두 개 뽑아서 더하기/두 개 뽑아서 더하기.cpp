#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    
    for (int i = 0; i < numbers.size(); i++)
    {
        for (int j = i + 1; j < numbers.size(); j++)
        {
            int temp = numbers[i] + numbers[j];
            auto value = find(answer.begin(), answer.end(), temp);
            
            if (value == answer.end())
                answer.push_back(temp);
        }
    }
    
    sort(answer.begin(), answer.end());
    answer.erase(unique(answer.begin(), answer.end()), answer.end());
    
    return answer;
}