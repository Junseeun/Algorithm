#include <iostream>
#include <stack> 
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    stack<int> stk; // int type의 stack 선언
    string str;
    
    if(n<1 || n>10000)
        return 0;
        
    for(int i=0; i<n; i++){
        cin >> str;
        
        if(str == "push") {
            
            int num=0;
            cin >> num;
            stk.push(num);
            
        } else if(str == "pop"){
            
            if(stk.empty()){
                
                cout << "-1" << endl;
                
            } else {
                
                cout << stk.top() << endl;
                stk.pop();
                
            }
            
        } else if(str == "size"){
            
            cout << stk.size() <<endl;
            
        } else if(str == "empty"){
            
            if(stk.empty()){
                
                cout << "1" << endl;
                
            } else {
                
                cout << "0" << endl;
                
            }
            
        } else if(str == "top"){
            
            if(stk.empty()){
                
                cout << "-1" << endl;
                
            } else {
                
                cout << stk.top() << endl;
                
            }
        }
    }

    return 0;
}
// 각각 5개의 함수를 만들어서 메인함수에서 동작하게끔 구현해봤는데 오류가 났다. 
// 함수를 만들지 않고 간단하게 구현하는 방법을 알게되었다. 

