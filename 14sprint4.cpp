#include <iostream>
#include <Windows.h>
#include <stdlib.h>
#include <vector>
#include <fstream>
#include "nino.h"
using namespace std;

void main()
{
	Nino N = Nino(30, 15, 100);
	int NI = N.ni;
	int NO = N.no;
	int capacity = N.c;
	int cnt = 0, loss = 0, sum = 0, max = 0, qsize;
	int ni, no;
	int NofPacket[120];
	vector<int> q;
	while (cnt <= 120) {
		srand(time(NULL));
		ni = rand() % NI;
		no = rand() % NO;

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

		qsize = q.size();

		NofPacket[cnt] = qsize;
		sum += qsize;
		if (max < qsize) {
			max = qsize;
		}
		cnt += 1;
		Sleep(1000);
	}

	cout << "손실: " << loss << "\n";
	cout << "평균:  " << sum / 120. << "\n";
	cout << "최대값:  " << max;

	ofstream xx("file.txt");
	for (int i = 0; i < 120; i++) {
		xx << NofPacket[i] << "\n";
	}
}