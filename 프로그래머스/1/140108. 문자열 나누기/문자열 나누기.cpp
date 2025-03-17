#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string s) {
    int answer = 0;
    int XCount = 0;
    int NotXCount = 0;
    char x = s[0];
    
    for (int i = 0; i < s.size(); i++)
    {
        if (XCount == NotXCount)
        {
            answer++;
            XCount = 0;
            NotXCount = 0;
            x = s[i];
        }
        
        if (s[i] == x)
            XCount++;
            
        else
            NotXCount++;
    }
    
    return answer;
}