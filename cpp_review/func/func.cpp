#include <iostream>
using std::cout;
using std::cin;
using std::endl;


int mult(){
	int num1;
	int num2;

	cout << "Give me the first number: ";
	cin >> num1; 
	cout << "Give me the second number: ";
	cin >> num2;

	int answer = num1 * num2;
	cout << answer << endl;

return answer;
}


int main(){
	mult();


return 0;
}
