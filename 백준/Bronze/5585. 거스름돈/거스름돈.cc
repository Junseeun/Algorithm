#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> yen = {500,100,50,10,5,1};
    int pay,count=0;
    cin >> pay;
    pay = 1000-pay;

    for(int i =0 ; i<6; i++) {
        for(;;) { // 무한루프 
            if(pay>=yen[i]) {
                pay-=yen[i];
                count++;
            }else break;
        }
    }
    cout<<count;
}

// vector는 동적 배열로 , 나중에 크기를 동적으로 변경할 수 있는 유연성 가지고 ㅇ
