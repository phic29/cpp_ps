#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while(true){
        string S;
        getline(cin, S);
        if(S == ".") break;

        stack<char> st;
        bool isValid = true;

        for(char c : S){
            if(c == '(' || c == '['){
                st.push(c);
            }
            else if(c == ')'){
                if(st.empty() || st.top() != '('){
                    isValid = false;
                    break;
                }
                st.pop();
            }
            else if(c == ']'){
                if(st.empty() || st.top() != '['){
                    isValid = false;
                    break;
                }
                st.pop();
            }
        }

        if(!st.empty()) isValid = false;

        if(isValid) cout << "yes\n";
        else cout << "no\n";
    }

    return 0;
}