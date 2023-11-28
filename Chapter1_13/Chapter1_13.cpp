#include <iostream>

namespace MySpace1 {

	namespace InnerSpace {
		int my_function() {
			return 0;
		}
	}
	int doSomething(int a, int b) {
		return a + b;
	}
}

namespace MySpace2 {
	int doSomething(int a, int b) {
		return a * b;
	}
}

using namespace std;

int main() {
	using namespace MySpace1::InnerSpace;
	my_function();
	//doSomething(3, 4);
	return 0;
}