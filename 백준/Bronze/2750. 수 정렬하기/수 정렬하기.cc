#include <iostream>
using namespace std;

int main(){
    int N;
    int arr[1000];
    
    cin >> N;
    for(int i=0 ; i<N; i++){
        cin >> arr[i];
    }
    int temp;
    
    //버블 정렬을 사용해 배열을 오름차순으로 정렬 
    for(int i=0; i<N-1;i++){
        for(int j=0;j<N-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                
            }
        }
    }
    for(int i=0;i<N;i++)
        cout<<arr[i]<<"\n";
}

