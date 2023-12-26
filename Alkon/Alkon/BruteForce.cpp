#include<iostream>
#include<string>
using namespace std;

//use '\n'

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string n;
	cin >> n;

	int low = 0;
	int sum = 0;
	low = stoi(n) - (9 * n.size());

	for (int i = low; i < stoi(n); i++) { 
		sum = i;
		int temp = i;
		while (temp != 0) {
			sum += temp % 10;
			temp /= 10;
		}
		if (stoi(n) == sum) {
			cout << i << '\n';
			break;
		}
	}
	if (stoi(n) != sum)
		cout << 0;

	return 0;
}