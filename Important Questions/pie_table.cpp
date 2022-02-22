#include <bits/stdc++.h>
using namespace std;

vector<int> Pie_Table(string s){
    int i = 0;
    int j = 1;
    int n = s.size();

    vector<int>Pie(n);
    while(j < n){
        if(s[i] == s[j]){
            Pie[j] = i + 1;
            i++;
            j++;
        }
        else{
            if(i == 0){
                Pie[j] = 0;
                j++;
            }
            else{
                i = Pie[i-1];
            }
        }
    }
    return Pie;
}

int main(){
    string s = "ababaca";
    vector<int>ans = Pie_Table(s);
    for(int i : ans){
        cout << i << endl;
    }
    return 0;
}