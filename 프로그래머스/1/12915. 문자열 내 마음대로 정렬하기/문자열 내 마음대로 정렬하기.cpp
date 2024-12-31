#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int I;
bool cmp(string a, string b){
    if (a[I] == b[I])
        return a < b;
    
    else
        return a[I] < b[I];
}

vector<string> solution(vector<string> strings, int n) {
    I = n;
    sort(strings.begin(), strings.end(), cmp);
    
    return strings;
}