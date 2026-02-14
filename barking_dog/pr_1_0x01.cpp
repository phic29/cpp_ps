#include <bits/stdc++.h>
using namespace std;

/*
문제
주어진 길이 N의 int 배열 arr에서 합이 100인 서로 다른 위치의 두 원소가 존재하면 1을, 존재하지 않으면 0을 반환하는 
함수 func2(int arr[], intN)을 작성하라. arr의 각 수는 0 이상, 100 이하이고 N은 1000 이하이다.

func2({1, 52, 48}, 3) = 1,
func2({50, 42}, 3) = 1,
func2({4, 13, 63, 87}, 4) = 1,
*/

int func2(int arr[], int N){
    int freq[101] = {};
    for(int i = 0; i < N; i++){
        if(freq[100-arr[i]] == 1)
            return 1;
        freq[arr[i]] = 1;
    }
    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int arr[] = {}; int N = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    func2(arr, N);
    return 0;
}
