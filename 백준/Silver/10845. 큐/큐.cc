#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main(){
    
    int N;
    cin >> N;
    
    queue<int>q;
    string str;
    
    if(N<1 || N>10000)
        return 0;
    
    for(int i=0 ; i<N; i++){
        cin >> str;
        
        if(str=="push"){
             
            int num=0;
            cin>>num;
            q.push(num);
            
        }
        else if(str=="pop"){
            if(q.empty()){
                cout<<"-1"<<endl;
            }
            else{
                cout<<q.front()<<endl;
                q.pop();
            }
            
        }
        else if(str=="size"){
            cout<<q.size()<<endl;
            
        }
        else if(str=="empty"){
            if(q.empty()){
                cout<<"1"<<endl;
            }
            else
                cout<<"0"<<endl;
        }
        else if(str=="front"){
            if(q.empty()){
                cout<<"-1"<<endl;
            }
            else
                cout<<q.front()<<endl;
        }
        else if(str=="back"){
            if(q.empty()){
                cout<<"-1"<<endl;
            }
            else
                cout<<q.back()<<endl;
        }
    }
    
    return 0; 
    
}
