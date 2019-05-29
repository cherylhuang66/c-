#include "SpyOutput.h" 
#define endl '\n' 
#include <iostream>
using namespace std;

int main() { 
	double d1 = 123.4; 
	int i1 = 456; 

	SpyOutput spy(&cout); 
	spy << "d1=" << d1 << " i1=" << i1 << 'W' << endl;
	spy << "abcdef" << endl;
	cout << "count=" << spy.getCount() << endl; 
	cout << "Check Sum=" << spy.getCheckSum() << endl; 
	return 0;
} 

/* the output of the current code is:
d1=123.4 i1=456W
abcdef
count=24
Check Sum=1568
*/
