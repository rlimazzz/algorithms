#include <bits/stdc++.h>

using namespace std;

int mdc(int a, int b) {
        if(b == 0) {   
                return a;
        }
        return mdc(b, a%b); 
}

int main() {
        int entr1, entr2;
        cin >> entr1 >> entr2;
        cout << mdc(entr1, entr2) << endl;
        return 0;
}

