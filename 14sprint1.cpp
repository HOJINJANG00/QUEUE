#include <iostream>
#include <Windows.h>
#include <stdlib.h>
using namespace std;

int main()
{
	int cnt = 0;
	while (cnt <= 120) {
		int rdm = rand() % 100;
		cout << rdm << endl;
		cnt += 3;
		Sleep(3000);
	}
}