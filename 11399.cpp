#include <iostream>
#include <algorithm>

using namespace std;

int N,Time;
int arr[1001];



int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> N;
	for (int i = 0; i < N; i++) {	
		cin >> arr[i];
	}
	sort(arr, arr + N);

	for (int i = 0; i < N; i++) {
		Time += arr[i] * (N - i);
	}
	cout << Time;
	


	return 0;
}
