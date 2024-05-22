#include "PilaInteractivo.h"
#include<stack>

using namespace std;

stack<int> s;
int x;

void agrega(int n) {
	// FIXME
	s.push(n);
}

int saca() {
	// FIXME
	if(s.empty()){
        return -1;
	} else {
	    x=s.top();
        s.pop();
	}
	return x;
}
