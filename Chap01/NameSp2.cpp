#include <iostream>

namespace BestComImpl {
	void SimpleFunc();
}

namespace ProgComImpl {
	void SimpleFunc();
}

int main() {
	BestComImpl::SimpleFunc();
	ProgComImpl::SimpleFunc();
	return 0;
}

void BestComImpl::SimpleFunc() {
	std::cout << "BestCom�� ������ �Լ�"<<std::endl;
}

void ProgComImpl::SimpleFunc() {
	std::cout << "ProgCom�� ������ �Լ�"<<std::endl;
}