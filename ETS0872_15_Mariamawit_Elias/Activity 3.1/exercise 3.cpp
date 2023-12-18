#include <iostream>
using namespace std;
int main() {
	char let;//let stand for letter
	cout << "enter a character" << endl;
	cin >> let;
	if (let >= 'A' && let <= 'Z'){
		cout << "upper case letter " << endl;
	  if (let == 'A' || let == 'E' || let == 'I' || let == 'O' || let == 'U')
		cout << "It is a vowel." << endl;
	  else
		cout << "It is consonate." << endl;
       }

	else if (let >= 'a' && let <= 'z') {
		cout << "lower case letter" << endl;
		if (let == 'a' || let == 'e' || let == 'i' || let == 'o' || let == 'u')
			cout << "It is a vowel." << endl;
		else
			cout << "consonate" << endl;
	}

	else if (let >= '0' && let <= '9') {
		cout << "It is a digit" << endl;

		if (let % 2 == 0)
			cout << "It is an even number." << endl;
		else if (let % 2 != 0)
			cout << " It is an odd number." << endl;

	}
		else{
			cout << "special character" << endl;
	     }



	return 0;
}
