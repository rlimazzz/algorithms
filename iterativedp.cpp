#include <bits/stdc++.h>

using namespace std;

int percorrido[1001];

int fibo(int x) {
	percorrido[0]=0;
    percorrido[1]=1;
    for(int i = 2; i <= x;i++) {
        percorrido[i] = percorrido[i - 1] + percorrido[i - 2];
    }
    return percorrido[x];
}


int main() {
    int n;
    cin >> n;
	cout << fibo(n) << endl;
	return 0;
}
