#pragma once
#include <iostream>
#include <sstream>
using namespace std;

class SpyOutput{
	ostream *os;
	stringstream ss;
	unsigned int _count, _checkSum;
public:
	SpyOutput(ostream *);
	int getCount();
	int getCheckSum();
	template <typename T>
	SpyOutput& operator<<(T x){
		ss<<x;
		*os<<x;
		return *this;
	}
};