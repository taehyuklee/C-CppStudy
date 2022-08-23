//C++ Input Output using STL
#include <iostream>
#include <stdio.h>

using namespace std;

string a; // string 변수를 선언해 놓는다. 

int main(void){
	
	cin >>a; //input
	cout << a <<"\n"; //output
	
	/* 참고로 scanf는 string자체를 위와 같이 받아올수 없다. 
	 char s[] <-String 로 받아와야 한다. scanf(a, % );  - 급의문이 난 점- String bytes[] <- String이 원소인 배열 */
	
	return 0;
} 

/*C++은 main함수를 중심으로 돌아간다. 
컴파일이 시작되면 전역변수초기화 라이브러리 import등의 작업이 발생하고 main함수에 얽혀있는 함수들이 작동된다.
main 함수가 0을 리턴하면 프로세스가 종료되게 된다 <- 이 부분때문에 int main() int로 반환하는 type이 된 것.*/
