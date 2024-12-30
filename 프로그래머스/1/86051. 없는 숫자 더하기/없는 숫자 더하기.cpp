#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    
    sort(numbers.begin(), numbers.end());
    
    for (int i = 0; i <= 9; i++)
    {
        cout << i << " " << numbers[i] << endl;
        if (numbers[i] != i)
        {
            answer += i;
            numbers.insert(numbers.begin() + i, 0);
        }
    }
    
    return answer;
}