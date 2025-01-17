// 공백처리
// 문자열 안에 있는지

#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s, int n) {
    
    for (int i = 0; i < s.size(); i++)
    {
        int temp = 0;
        
        if (s[i] != ' ')
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                temp = s[i] + n;
                
                if (temp > 'Z')
                    temp -= 26;
                
                s[i] = (char)temp;
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                temp = s[i] + n;
                
                if (temp > 'z')
                    temp -= 26;
                
                s[i] = (char)temp;
            }
        }
        else
            continue;
    }
    
    return s;
}