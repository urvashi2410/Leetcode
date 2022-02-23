#include <bits/stdc++.h>
using namespace std;

void Pie_Table(vector<int>&Pie, int n, string haystack){
    for(int i = 0; i < n; i++){
        Pie[i] = 0;
    }

    int i = 0;
    int j = 1;

    while(j < n){
        if(haystack[i] == haystack[j]){
            Pie[j] = i+1;
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
}

vector<int> KMP(string haystack, string needle, vector<int>Pie){
    int n = haystack.size();
    int m = needle.size();

    vector<int>ans;

    int i = 0;
    int j = 0;

    while(i < n){
        if(haystack[i] == needle[j]){
            i++;
            j++;
        }
        if(j == m){
            ans.push_back(i - m);
            j = Pie[j-1];
        }
        else if(i < n && haystack[i] != needle[j]){
            if(j == 0){
                i++;
            }
            else{
                j = Pie[j-1];
            }
        }
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    string needle;
    cin >> needle;
    string haystack;
    cin >> haystack;
    int m = haystack.size();
    vector<int>Pie(m);
    Pie_Table(Pie, m, haystack);
    vector<int>indexes = KMP(haystack, needle, Pie);

    for(int i : indexes){
        cout << i << " ";
    }

    return 0;
}