//============================================================================
// Name        : hw05.cpp
// Author      : Jack Schmid -- CS1C T/Th 3:30-5:50 -- Professor Kath
// Description : Program to practice using STL Vectors in C++, Ansi-style
//============================================================================


#include "hw05.h"

int main() {
	vector<int> winners;
	winners= Lotto(100 ,5);
	cout << "Winners = Lotto(100,5);" << endl;
	cout << "Winners are:\n";
	show(winners);
	return 0;
}

//Function that fills a vector with ints and then randomly selects winners
//Input is number of entries and number of winners wanted
//Output is the numbers of the entries that won the lotto
vector<int> Lotto(int slots, int wins){
	vector<int> options;
	for(int i = 1; i <= slots; i++){
		options.push_back(i);
	}
	return selectWinners(options, wins);
}
//Function that randomly shuffles a vector and then truncates it to a certain size, thus randomly choosing a winner(s)
//Input is the vector of possible winning numbers and number of winners wanted
//Output is a vector containing the number of requested winners
vector<int> selectWinners(vector<int> vector, int winners){
	random_shuffle(vector.begin(), vector.end());
	vector.resize(winners);
	sort(vector.begin(), vector.end());
	return vector;
}
//Fuction that loops through and prints out a vector's data using cout
//Input is a vector object
//Output is the vector's data to console
template <class T>
void show(T vector){
	int size = vector.size();
	for(int i = 0; i < size; i++){
		cout << vector[i] << " ";
	}
	cout << endl;
}
