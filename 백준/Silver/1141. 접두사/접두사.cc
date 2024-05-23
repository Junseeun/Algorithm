#include <vector>
#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

bool compareStrSize(string str1, string str2)
{
    return str1.size() < str2.size();
}

int main()
{
    int N;
    cin >> N;
    cin.ignore(); // 버퍼에 남아있는 개행 문자 제거 -> 빈 문자열 읽는거 해결

    vector<string> strs(N);
    for (string &input : strs) // N개의 문자열 입력받아 'strs' 벡터에 저장
    {
        getline(cin, input);
    }
    sort(strs.begin(), strs.end(), compareStrSize); //문자열 길이로 오름차순

    int answer = N;
    for (int i = 0; i < N; i++)
    {
        string prefix = strs[i];
        for (int j = i + 1; j < N; j++)
        {
            if (strs[j].find(prefix) == 0)
            {
                answer--;
                break;
            }
        }
    }
    cout << answer <<endl;
}
// 모르겠다
