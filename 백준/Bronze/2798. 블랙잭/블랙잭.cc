#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, m, cards[101];
    cin >> n >> m;
    int sum = 0;
    int ans = 0;
    for (int i = 0; i < n;i++){
        cin >> cards[i];
    }
    for (int i = 0; i < n-2;i++){
        for (int j = i + 1; j < n - 1; j++){
            for (int k = j + 1; k < n; k++){
                sum += cards[i] + cards[j] + cards[k]; // 3장의 합
                if(abs(m-ans)>abs(m-sum) && m-sum >= 0){
                    // 더 가까운 값을 저장, 주어진 숫자를 넘으면 안됨
                    ans = sum;
                }
                sum = 0;
            }
        }
    }
    cout << ans;
    return 0;
} 