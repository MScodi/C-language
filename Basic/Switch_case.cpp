// Key points Expression inside must be CONSTANT value,  nested switch allowed,  Break and Default statement are optional
 
include <iostream> 
using namespace std; 

int main() { 
int x = 2; 
	switch (x) 
	{ 
		case 1: 
			cout << "Choice is 1"; 
			break; 
		case 2: 
			cout << "Choice is 2"; 
			break; 
		case 3: 
			cout << "Choice is 3"; 
			break; 
		default: 
			cout << "Choice other than 1, 2 and 3"; 
			break; 
	} 
return 0; 
} 
