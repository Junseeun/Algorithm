#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string addNum(string a, string b);

int main(){
    string a, b;
    cin >> a >> b;
    
    string sum = addNum(a,b);
    cout << sum;
    return 0;
}

string addNum(string a, string b){
    string res;
    
    // 큰 수로 자릿수 맞추기 
    int MaxLen = max(a.length(),b.length()); // a와 b 중 더 긴 문자열 길이 구함.
    a = string(MaxLen - a.length(),'0')+a; // 0으로 자릿수 맞추기 -> string 작업시 필요 
    b = string(MaxLen - b.length(), '0') + b; // b가 MaxLen보다 짧으면 MaxLen - b.length()만큼의 길이되도록 왼쪽에 '0' 추가
    
    int carry = 0; // 변수 초기화해서 올림값 저장 
    for(int i = MaxLen - 1; i>=0; i--){
        int digitsum = (a[i] -'0') + (b[i] - '0') + carry; // 각 자릿수 계산
        carry = digitsum /10; // 올림 계산
        res += (digitsum % 10) + '0'; // 자리수를 결과에 더함
    }
    
    // 연산 마친 후 올림 값 남아있다면 올림 값을 결과에 더해줌
    if(carry > 0 )
        res += carry + '0';
    
    // 결과를 뒤집어 출력
    reverse(res.begin(), res.end());
    
    return res;
}