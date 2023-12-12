#include <bits/stdc++.h>

using namespace std;

int percorrido[1001];

int fibo(int x) {
	if(percorrido[x] != 0) {
		return percorrido[x];
	}
	else if(x < 2) {
		return percorrido[x] = x;
	}
	return percorrido[x] = fibo(x - 1) + fibo(x - 2);
}


int main() {
    int n;
    cin >> n;
	cout << fibo(n) << endl;
	return 0;
}
