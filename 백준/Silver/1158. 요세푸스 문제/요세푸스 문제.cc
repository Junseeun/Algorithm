#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int n, k, tmp;

queue<int> q;


int main(int argc, char* argv[]) {
    
    cin >> n >> k;
    
    for(int i=1;i<=n;i++){
        q.push(i);
    }
    
    cout << '<';
    
    while(q.size() > 1){
        for(int i=0;i<k-1;i++){
            
            q.push(q.front());  //
            q.pop();
        }
        
        tmp = q.front();
        cout << tmp << ", ";
        q.pop();
    }
    
    tmp = q.front(); // 주의 :: <> 붙어야하므로 큐 다 비우지 말고, 하나 남겨둔 상태에서 반복문 종료 , 그래야 (,)가 들어가지 않음
    
    cout << tmp << ">\n";
    
    
    
    return 0;
}
//원형 연결 리스트를 사용하려다가 실패했다. 큐를 사용하면 된다.
