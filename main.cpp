# array4

#include <iostream> 
#include <sstream>

using namespace std;

bool read_numbers(int array[10])
{
	string string;
	getline(cin, string);
	istringstream stream(string);
	int element = -1 ;
	bool success = true;

	for (int i = 0; i < 10; ++i) {
		if (!(stream >> array[i])) {
			success = false;
			break;
		}
	}
	if (stream >> element) success = false;

	return success;
}
int main() {
	int a[10];

	if (read_numbers(a)) {
		int count = 0;
		for (int j = 0; j < 10; j++){
			for (int i = 0; i < j; i++) {
				if (a[i] > a[j]) {
					count++;
				}
			}
		}
		cout << count;

	}
	else {
		cout << "An error has occured while reading numbers from line";
	}


	cin.get();
	cin.get();

	return 0;
}
