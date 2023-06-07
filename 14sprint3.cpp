#include <iostream>
#include <Windows.h>
#include <stdlib.h>
#include <vector>
using namespace std;

int main()
{
	int cnt = 0, capacity = 30, loss = 0;
	int NI = 10, NO = 5, ni, no;
	vector<int> q; //±âº»°ª
	while (cnt <= 120) {
		srand(time(NULL));
		ni = rand() % NI;
		no = rand() % NO;
		cout << "ni = " << ni << endl;
		cout << "no = " << no << endl;

		if (ni + q.size() > capacity) {
			loss += ni + q.size() - capacity;
			ni = capacity - q.size();
		}
		for (int i = 0; i < ni; i++) {
			int rdm = rand() % 100;
			q.push_back(rdm);
		}

		if (no > q.size()) {
			no = q.size();
		}
		for (int i = 0; i < no; i++) {
			q.erase(q.begin());
		}

		for (int i = 0; i < q.size(); i++) {
			cout << q[i] << " ";
		}
		cout << endl;
		cout << "ni = " << ni << endl;
		cout << "no = " << no << endl;
		cout << "------------------------------" << endl;
		cnt += 3;
		Sleep(3000);
	}
}