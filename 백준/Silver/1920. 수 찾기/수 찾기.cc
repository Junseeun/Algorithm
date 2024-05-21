#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int N, M;
int n;
int arr[100000];

int solve(int n) {
    int start = 0;
    int end = N-1;
    while (start <= end) {
        int mid = (start + end) / 2;
        if (arr[mid] == n) return 1;
        else if (n < arr[mid]) end = mid - 1; // n이 arr[mid](중간값)보다 작으면 n은 왼쪽 배열에 있음. 따라서 mid-1로 왼쪽으로 범위 좁힘.
        else start = mid + 1; // n이 arr[mid]보다 크면 n은 오른쪽 배열에 있음. mid + 1로 오른쪽 배열로 범위 좁힘.
    }
    return 0;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); // 시간 초과 해결
    
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + N); // 배열 정리
    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> n;
        cout << solve(n) << "\n";
    }
}

