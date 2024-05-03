#include <iostream>
#define MAX 10001

int func(int num){
    int number = num;
    
    while(num!=0){
        number = number +(num % 10);
        num=num/10;
    }
    return number;
}

int main(){
    int n=0;
    bool check[MAX]={false, }; //1번 함수 가지고 1~10,000이 있는 배열에서 삭제 == boolean배열에서 true로 바꿔줌
    
    for(int i=1; i<MAX;i++){ //걸러진 배열에서 false, 즉 생성자가 없는 수가 셀프넘버가 되고 이 값을 출력
        n=func(i);
        
        if(n<10001){
            check[n]=true;
        }
    }
    
    for(int i=1;i<MAX;i++){
        if(check[i]==false){
            std::cout<<i<<std::endl;
        }
    }
    
    return 0;
}
