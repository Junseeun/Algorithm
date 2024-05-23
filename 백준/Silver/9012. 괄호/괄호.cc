
#include <iostream>
#include <stack>
using namespace std;

int main() {
    string sentence;  // 입력될 문자열
    int T;  // 입력 데이터의 수
    int sentence_size = 0;
    string result;
    
    cin >> T;
    for (int i = 0; i < T; i++) {
        stack<char> s;    // i가 달라질때마다 스택은 초기화되어야함
        result = "YES";    // result 값은 YES로 초기화

        cin >> sentence;
        sentence_size = sentence.size();

        // 문자열의 처음부터 탐색 시작
        for (int j = 0; j < sentence_size; j++) {
            if (sentence[j] == '(') {  // 여는 괄호일때
                s.push('(');
            }

            else if (sentence[j] == ')') {  // 닫는 괄호일때,
                if (!s.empty()) {  // 스택이 비어있지 않으면,
                    s.pop();
                }
                else {  // 비어있으면
                    result = "NO";
                }
            }
        }

        // 마지막까지 연산완료 후,
        // 여는 괄호와 닫는 괄호의 짝이 맞지 않는 경우
        // 즉, 스택이 비어있지 않은 경우
        if (!s.empty()) {
            result = "NO";
        }

        cout << result << endl;

    }

    return 0;
}