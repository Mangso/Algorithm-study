#include <iostream>
using namespace std;

int solution(int n) {
    int cnt = 0;

    while (n > 0) {
        if (n % 2 != 0) ++cnt;
        n /= 2;
    }

    return cnt;
}