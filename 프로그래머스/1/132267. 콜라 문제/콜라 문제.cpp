#include <string>
#include <vector>
#include <iostream>

using namespace std;

// a-마트에 주는 빈 병, b-마트에서 받는 콜라병, n-상빈이가 가지고 있는 콜라 갯수
int solution(int a, int b, int n) {
    int answer = 0;
    int add = 0;

    
    while (1) {
        if (n < a) {
            break;
        }
        
        answer += (n / a) * b;
        n = ((n / a) * b) + (n % a);
    }
    return answer;
}