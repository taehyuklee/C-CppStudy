#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string.h>

using namespace std;

//data type 원시타입 - char, bool, int, long long, double, unsinged long long, void, char
// 1byte = 8bit 정보의 최소단위 - 영어 1byte, 한글 2byte 
// 숫자 유효범위에 대해서도 좀 더 생각해보자 (Double precision)에 관해서 8byte -> 16자리, 4byte -> 8자리 



 //void - 아무것도 없는 것 (반환을 해주지 않는다) 
void voidFunction(){
 	int ret = 2;
 	std::cout << ret <<"\n";
 }
 
 
 
 
 //int - 정수형 4byte = 32 bit 7자리 (앞에 +, - 빼고) 
 int returnIntFunction(){
 	
 	// 1.3으로 써도 어차피 정수까지만 잘려서 return한다. 
 	
 	int a = 1.3;
	cout << a << "\n";
 	
 	return 1.3; 	
 	
 }
 
 
 
 //double형 - 실수형 8byte = 64 bit 15자리 (앞에 +, - 빼고) 
 double returnDoubleFunction(){
 	
 	double a = 1.2222;
 	
 	return a; 
 	
 }
 
 
 
 //char 문자형  1byte의 크기를 갖는다
 char charFunction(){
 	
 	char a = 'a'; //작은 따옴표 ''는 문자를 의미함 "" 큰 따옴표는 string을 의미한다 (문자열) 
	cout << a << "\n"; 
	
	return a;
 }
 
 
 
//string 문자열
void stringFunction(){
	
	//문자열은 다음과 같이 표현한다.
	//자바에서 배열은 좀 다르게 선언됨 -> int [] i, char [] s 이렇게 됨. C++하고는 []와 변수 이름하고 순서가 바뀌었다. 
	char s[10] = {'w', 'o', 'w', ' ', 'f', 'a', 'n', 't', 'a', 's'};
	 
	
	//문자열은 
	string a = "wow fantas";
	
	
	cout << s << "\n";
	
	cout << a << "\n";
	
	cout << a.size() << "\n"; 
	//.size() <- 자바에서는 List size할때 사용하는데, array length로 한다.
	//C++에서는 array는 .size(), java에서는 .length()로 mehtod를 가지고 있다. (a - instance)
	
	
	//문자열에 대한 덧셈 자바랑 비슷하다. 
	string str = "wow";
	str += " ";
	str += "fantastic";
	
	cout << str.size() << "\n";
	cout << a << "\n";
	 
} 
 
 
 
 int main(){
	
	//아무것도 반환하지 않는다. 
	voidFunction();
	
	//int형을 반환해준다 
	int returnInt = returnIntFunction();
	
	//c++하고 Java하고 이 부분에서도 다르네, print할때 cout쓰면 그냥 해도 되는데, C언어처럼 printf는 형식 맞춰줘야함. 
	printf("정수 %d 입니다.", returnInt);
	cout << returnInt << " " << "int 형입니다" << "\n"; // C++ iostream이 더 편하긴 함. 
	
	
	//double형을 반환해준다 
	double returnDouble = returnDoubleFunction();
	cout << returnDouble << " " << "double 형입니다" <<"\n"; 
	
	
	//cahr형을 반환해준다
	char returnChar = charFunction();
	cout << returnChar << " " << "char 형입니다" << "\n"; 
	
	
	//string 문자열
	stringFunction();
	
	return 0;
 	
 }
