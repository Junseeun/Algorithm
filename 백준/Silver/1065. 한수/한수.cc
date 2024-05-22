#include <iostream>
 
using namespace std;
 
int arithmetic_sequence(int num) {
    int cnt = 0; // 한수 카운팅
 
    if (num < 100) {
        return num;
    } else {
        cnt = 99; // 100이상의 수가 들어오면 한수의 최소 개수는 99개. (???)
 
        for (int i = 100; i <= num; i++) {
            int hun = i / 100;         // 백의 자릿수
            int ten = (i / 10) % 10; // 십의 자릿수
            int one = i % 10;
 
            if ((hun - ten) == (ten - one)) { // 등차수열이므로 각 자릿수 순서대로 차이 값 구해야 함.
                cnt++;
            }
        }
    }
    return cnt;
}
 
int main(int argc, char const *argv[]) {
 
    int N;
    cin >> N;
 
    int result = arithmetic_sequence(N);
    cout << result;
    return 0;
}

