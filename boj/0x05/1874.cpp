#include <bits/stdc++.h>
using namespace std;
// boj 1874

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    stack<int> st;
    vector<char> result;

    int cur = 1;
    for(int i = 0; i < n; i++){
        int target;
        cin >> target;

        if(target >= cur){
            while(cur <= target){
                st.push(cur++);
                result.push_back('+');
            }
            st.pop();
            result.push_back('-');
        }
        else{
            if(!st.empty() && st.top() == target){
                st.pop();
                result.push_back('-');
            }
            else{
                cout <<"NO\n";
                return 0;
            }
        }
    }

    for(char c: result)
        cout << c << '\n';
        
    return 0;
}