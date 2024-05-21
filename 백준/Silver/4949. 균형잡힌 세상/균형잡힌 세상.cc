#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(void)
{
	stack<char> s; //스택 생성
	string sentence; //문자 저장 변수 선언
	bool flag = 0;
	while (1)
	{
		getline(cin, sentence); //띄어쓰기가 있는 문자를 입력받음
		if (sentence == ".") break;
		for (int i = 0; sentence[i] != '.'; i++)
		{
			if (sentence[i] == '(' || sentence[i] == '[') s.push(sentence[i]); //여는 괄호이면 스택에 push
			else if (sentence[i] == ')') // 닫는 괄호이면
			{
				if (!s.empty() and s.top() == '(') s.pop(); //짝을 만났으면 pop
				else
				{
					flag = 1; 
					break;
				} //짝을 못 만났으면 더 이상 탐색할 필요가 없으니 flag = 1로 변경 후 실행 종료
			}
			else if (sentence[i] == ']')
			{
				if (!s.empty() and s.top() == '[') s.pop(); //짝을 만났으면 pop
				else
				{
					flag = 1;
					break;
				} // 짝을 못 만났으면 더 이상 탐색할 필요가 없으니 flag = 1변경 후 실행 종료
			}
		}
		if (s.size() == 0 && flag == 0) cout << "yes\n";
		else cout << "no\n"; //스택에 괄호가 남아있거나 flag가 1이라면 no 출력

		while (!s.empty())
		{
			s.pop(); // 스택 초기화
		}
		flag = 0; //flag 초기화
	}

}