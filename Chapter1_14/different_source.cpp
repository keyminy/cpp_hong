#include <iostream>

void doSomething() {
	//header������ �߰�ȣ �ȿ� �ִ� ���� ����.
	using namespace std;
#ifdef LIKE_APPLE
	cout << "APPLE" << endl;
#endif

#ifndef LIKE_APPLE
	cout << "Orange" << endl;
#endif
}