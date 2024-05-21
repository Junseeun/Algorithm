#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stack>
#include <queue>
using namespace std;
int main() {
    int N;
    scanf("%d", &N);
    queue<int> line;//순서대로 설 수 있는 라인
    stack<int> tmp; //한명씩 보관
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        line.push(x);
    }
    int flag = 1;
    while (!line.empty()) {
        if (line.front() == flag) {
            flag++;
            line.pop();
        }
        else if (!tmp.empty() && tmp.top() == flag) {
            tmp.pop(); // 간식을 받았으면 pop해서 다음사람이 받을 수 ㅇ.
            flag++;
        }
        else {
            tmp.push(line.front());
            line.pop();
        }
    }
    // line(큐)가 다 비워졌다면, 간식을 모두 순서대로 지급 or tmp(스택)에 아직 지급 못받은 인원 남아있음.
    while (!tmp.empty() && tmp.top() == flag) {
        tmp.pop();
        flag++;
    }
    tmp.empty() ? printf("Nice\n") : printf("Sad");
    return 0;
}
// 왜 c랑 c++을 같이 사용하는지 모르겠다.
