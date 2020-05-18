#include <iostream>
using namespace std;

void veTamGiacSao(int d) {
	int m = (2 * d - 1)/2;
	int n = 1;
	for(int i = 0; i < d; i++) {
		for(int j = 0; j < m; j++)
			cout << " ";
		m--;
		for(int k = 0; k < n; k++) {
			cout << "*";
		}
		cout << endl;
		n +=2;
	}
}

int main() {
	int d;
	cout << "Nhap vao so dong muon in: ";
	cin >> d;
	veTamGiacSao(d);
}
