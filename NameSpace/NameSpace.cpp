#include<iostream>
#include "aa.h"
#include "bb.h"

class dog {

private: 
	int age;

public:
	int getAge() {
		return age;
	}; //��� ���� getter
	void setAge(int age) {
		this->age = age;
	}; //��� ���� setter

	int external(int x);

};

int dog::external(int x) {
	std::cout << x;
}


int add(int x, int y)
{
	return x + y + 2;
}

int main() {
	
	//:: - scope resolution operator �������� ������
	std::cout << AA::add(1, 2) << std::endl;
	std::cout << BB::add(1, 2) << std::endl;
	std::cout << ::add(1, 2); //���� namespace�� �ǹ��Ѵ�.

	//����, aa.h �� bb.h�� namespace�� ������ ���� �ʾ�����
	//���� �̸��� add�Լ��� �����ϰ� �� ���̰� � add�� �ҷ��;� ����
	//������ ���̴�. �׷��⿡ namespace��� ������ �������ټ� �ִ�.


	/*���� DogŬ������ ��� �Լ��� Ŭ���� �ܺο��� ���ǰ� �����ϴ�
	*/
	
	return 0;
}