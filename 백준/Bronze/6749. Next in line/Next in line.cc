#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int min, mid;
    cin >> min >> mid;
    cout << mid + (mid - min);
}