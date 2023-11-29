#include <iostream>

void doSomething() {
	//header파일은 중괄호 안에 넣는 것이 좋다.
	using namespace std;
#ifdef LIKE_APPLE
	cout << "APPLE" << endl;
#endif

#ifndef LIKE_APPLE
	cout << "Orange" << endl;
#endif
}