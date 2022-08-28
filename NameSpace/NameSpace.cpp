#include<iostream>
#include "aa.h"
#include "bb.h"

class dog {

private: 
	int age;

public:
	int getAge() {
		return age;
	}; //멤버 변수 getter
	void setAge(int age) {
		this->age = age;
	}; //멤버 변수 setter

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
	
	//:: - scope resolution operator 범위지정 연산자
	std::cout << AA::add(1, 2) << std::endl;
	std::cout << BB::add(1, 2) << std::endl;
	std::cout << ::add(1, 2); //전역 namespace를 의미한다.

	//만약, aa.h 와 bb.h에 namespace를 정의해 놓지 않았으면
	//같은 이림의 add함수가 존재하게 될 것이고 어떤 add를 불러와야 할지
	//몰랐을 것이다. 그렇기에 namespace라는 것으로 구분해줄수 있다.


	/*위의 Dog클래스의 멤버 함수를 클래스 외부에서 정의가 가능하다
	*/
	
	return 0;
}