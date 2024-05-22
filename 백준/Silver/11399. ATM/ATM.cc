#include<iostream>
#include<algorithm>
using namespace std;

int main(void)
{
    int human[1001];
    int n;
    int sum=0;
    
    cin >> n;
    
    for (int i = 0; i < n; i++)
        cin >> human[i];

    sort(human, human + n);
    
    for (int i = 0; i < n; i++)
    {
        human[i + 1] += human[i];
        sum += human[i];
    }
    cout << sum <<endl;
    return 0;
}

