
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
        stack<char> s;    
        result = "YES";    

        cin >> sentence;
        sentence_size = sentence.size();

        
        for (int j = 0; j < sentence_size; j++) {
            if (sentence[j] == '(') {  
                s.push('(');
            }

            else if (sentence[j] == ')') {  
                if (!s.empty()) { 
                    s.pop();
                }
                else {  
                    result = "NO";
                }
            }
        }

        
        if (!s.empty()) {
            result = "NO";
        }

        cout << result << endl;

    }

    return 0;
}


/*
#include <iostream>
#include <stack>

using namespace std;

int main(){
    
    string sentence; // 입력될 문자열
    string result; // 입력된 문자열
    int flag = 0;
    
    int T;
    cin >> T;
    
    for(int i=0; i<T; i++){
        stack<char> s;
        result = "YES";
        
        cin >> sentence;
        flag=sentence.size();
        
        for(int j=0;j<flag; j++){
            if(sentence[j] == '(')
            {
                s.push('(');
            }
            else if(sentence[j] == ')'){
                if(!s.empty()){
                    s.pop();
                }
                else{
                    result = "No";
                }
            }
        }
        if(!s.empty()){
            result = "No";
        
    }
        cout<<result<<"\n";
    
    }
    return 0;
}
*/
// 아래코드는 실행시켰을 때 출력이되는데 백준에 제출했을때 틀렸다고 나온다. 왜 그런지 모르겠다. 
