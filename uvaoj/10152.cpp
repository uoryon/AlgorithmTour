/* Copyright*/
#include <iostream>
#include <string>

using namespace std;

string a[1002];
string b[1002];

int main() {
    int T;
    cin >>T;
    while (T--) {
        int n = 0, i = 0, j = 0;
        cin>>n;
        cin.ignore();
        for (i = 0; i < n; i++) {
            getline(cin, a[i]);
        }
        for (i = 0; i < n; i++) {
            getline(cin, b[i]);
        }
        for (i = j = n - 1; i >=0; i--) {
            if (a[i] == b[j]) j--;
        }
        for (; j >= 0; j--) {
            cout<<b[j]<<endl;
        }
        cout<<endl;
    }
    return 0;
}

