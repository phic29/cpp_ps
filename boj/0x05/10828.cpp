#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; cin >> N;
    stack<int> nums;
    while(N--){
        
        string text;
        cin >> text;
        if (text == "push"){
            int x; cin >> x;
            nums.push(x);
        }
        else if (text == "pop"){
            if(nums.empty()) cout << -1 << '\n';
            else {
                cout << nums.top() << '\n';
                nums.pop();
            }
        }
        else if (text == "size"){
            cout << nums.size() << '\n';
        }
        else if (text == "empty"){
            if(nums.empty()) cout << 1  << '\n';
            else cout << 0 << '\n';
        }
        else if (text == "top"){
            if(nums.empty()) cout << -1 << '\n';
            else cout << nums.top() << '\n';
        }
        
    }
    return 0;
}