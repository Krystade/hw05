/*
 * Hw5.h
 *
 *  Created on: Nov 22, 2019
 *      Author: Jack
 */

#ifndef HW5_H_
#define HW5_H_

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;

vector<int> Lotto(int slots, int wins);
vector<int> selectWinners(vector<int> v, int w);
template <class T>
void show(T v);
#endif /* HW5_H_ */
