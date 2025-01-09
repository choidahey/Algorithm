#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    int count = 0;
    
    for(int i = 0; i < s.size(); i++)
    { 
        if(s[i] == ' ')
            count = -1;
            
        if(count == 0 || count % 2 == 0)
            s[i] = toupper(s[i]);
        else
            s[i] = tolower(s[i]);
        
        count++;
    }
    
    return s;
}