#include <string>
#include <vector>
#include <iostream>
#include <array>

using namespace std;

string solution(int n) {
    string answer = "";
    array<string, 10000> arr = {"수", "박"};

    
    for (int i = 0; i < n; i++){
        if (i == 0 || i % 2 == 0)
            answer += arr[0];
        
        else
            answer += arr[1]; 
    }
    
    return answer;
}