#include <sstream>
#include <iostream>
#include "SpyOutput.h"
using namespace std;

SpyOutput::SpyOutput(ostream *s):os(s),_count(0),_checkSum(0){}

int SpyOutput::getCount(){
	_count=ss.str().size();
	return _count;
}

int SpyOutput::getCheckSum(){
	string temp=ss.str();
	for (unsigned int i=0; i<temp.size();i++){
		_checkSum+=temp[i];
	}
	return _checkSum;
}