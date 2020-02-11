//============================================================================
// Name        : Hw5.cpp
// Author      : Jack Schmid
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include "hw05.h"

int main() {
	vector<int> winners;
	winners= Lotto(100 ,5);
	cout << "Winners are:\n";
	show(winners);
	return 0;
}

vector<int> Lotto(int slots, int wins){
	vector<int> options;
	for(int i = 1; i <= slots; i++){
		options.push_back(i);
	}
	return selectWinners(options, wins);
}

vector<int> selectWinners(vector<int> v, int w){
	random_shuffle(v.begin(), v.end());
	v.resize(w);
	sort(v.begin(), v.end());
	return v;
}

template <class T>
void show(T v){
	int n = v.size();
	for(int i = 0; i < n; i++){
		cout << v[i] << " ";
	}
	cout << endl;
}
