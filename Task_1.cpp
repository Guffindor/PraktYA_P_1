#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

void ver(int num){
	if (num == 1 || ((num % 10) == 1 && num > 20)){
		cout << "В караване был " << num << " верблюд" << endl;
		return;
	}

	if ((num > 4 && num<21) || (num%10 > 4) || (num%10 == 0)){
		cout << "В караване было "  << num << " верблюдов" << endl;
		return;
	}
	cout << "В караване было " << num << " верблюда" << endl;
	}

int main(int argc, char **argv)
{
	int n;
	while (n != 0){
	cout << endl << "Введите количество верблюдов:" << endl;
	cin >> n;
	ver(n);
	}


	return 0;
}
