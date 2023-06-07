#include <iostream>
#include <Windows.h>
#include <stdlib.h>
#include <vector>
using namespace std;

int main()
{
	int cnt = 0;
	vector<int> vRand = { 0,0,0,0,0,0,0,0,0,0 }; //±âº»°ª
	while (cnt <= 120) {
		for (int i = 0; i < 10; i++) {
			int rdm = rand() % 100;
			vRand.push_back(rdm);
			vRand.erase(vRand.begin());
			for (int i = 0; i < 10; i++) {
				cout << vRand[i] << " ";
			}
			cout << endl;
		}
		cout << "------------------------------" << endl;
		cnt += 3;
		Sleep(3000);
	}
}