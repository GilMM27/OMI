#include "ColaInteractivo.h"
#include <queue>

using namespace std;

queue<int> q;
int x;

void agrega(int n) {
	// FIXME
	q.push(n);
}

int saca() {
	// FIXME
	if(!q.empty()){
        x=q.front();
        q.pop();
        return x;
	}
	return -1;
}
