#include<iostream>

using namespace std;

int main() {
	// input number of magnets
	int n;
	cin >> n;
	// init count as 1 because minimum number of groups is 1
	int tracker = -1, count = 1, arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		// if they are different, increase count and change tracker
		if (arr[i] == 10 && tracker == 0) {
			count++;
			tracker = 1;
		}
		else if (arr[i] == 1 && tracker == 1) {
			count ++;
			tracker = 0;
		}
		// initially set tracker value 
		else if (tracker == -1 && arr[i] == 1) {
			tracker = 0;
		}
		else if (tracker == -1 && arr[i] == 10) {
			tracker = 1;
		}
	}
	cout << count << endl;
	return 0;
}
