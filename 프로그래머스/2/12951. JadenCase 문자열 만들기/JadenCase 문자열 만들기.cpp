#include <string>
#include <cctype>

using namespace std;

string solution(string s) {
    bool new_word = true;

    for (int i = 0; i < s.size(); i++) {
        s[i] = tolower(s[i]);
        
        if (s[i] == ' ')
        {
            new_word = true;
        }
        else if (new_word && !isdigit(s[i]))
        {
            s[i] = toupper(s[i]);
            new_word = false;
        }
        else if (isdigit(s[i]))
            new_word = false;
    }
    
    return s;
}
