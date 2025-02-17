#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0, temp = 0;
    
    for (int i = 0; i < section.size(); i++)
    {
        if (temp > section[i]) continue;
        else
        {
            answer++;
            temp = section[i] + m;
        }
    }
    return answer;
}