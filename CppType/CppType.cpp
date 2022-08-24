#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string.h>

using namespace std;

//data type ����Ÿ�� - char, bool, int, long long, double, unsinged long long, void, char
// 1byte = 8bit ������ �ּҴ��� - ���� 1byte, �ѱ� 2byte 
// ���� ��ȿ������ ���ؼ��� �� �� �����غ��� (Double precision)�� ���ؼ� 8byte -> 16�ڸ�, 4byte -> 8�ڸ� 



 //void - �ƹ��͵� ���� �� (��ȯ�� ������ �ʴ´�) 
void voidFunction(){
 	int ret = 2;
 	std::cout << ret <<"\n";
 }
 
 
 
 
 //int - ������ 4byte = 32 bit 7�ڸ� (�տ� +, - ����) 
 int returnIntFunction(){
 	
 	// 1.3���� �ᵵ ������ ���������� �߷��� return�Ѵ�. 
 	
 	int a = 1.3;
	cout << a << "\n";
 	
 	return 1.3; 	
 	
 }
 
 
 
 //double�� - �Ǽ��� 8byte = 64 bit 15�ڸ� (�տ� +, - ����) 
 double returnDoubleFunction(){
 	
 	double a = 1.2222;
 	
 	return a; 
 	
 }
 
 
 
 //char ������  1byte�� ũ�⸦ ���´�
 char charFunction(){
 	
 	char a = 'a'; //���� ����ǥ ''�� ���ڸ� �ǹ��� "" ū ����ǥ�� string�� �ǹ��Ѵ� (���ڿ�) 
	cout << a << "\n"; 
	
	return a;
 }
 
 
 
//string ���ڿ�
void stringFunction(){
	
	//���ڿ��� ������ ���� ǥ���Ѵ�.
	//�ڹٿ��� �迭�� �� �ٸ��� ����� -> int [] i, char [] s �̷��� ��. C++�ϰ�� []�� ���� �̸��ϰ� ������ �ٲ����. 
	char s[10] = {'w', 'o', 'w', ' ', 'f', 'a', 'n', 't', 'a', 's'};
	 
	
	//���ڿ��� 
	string a = "wow fantas";
	
	
	cout << s << "\n";
	
	cout << a << "\n";
	
	cout << a.size() << "\n"; 
	//.size() <- �ڹٿ����� List size�Ҷ� ����ϴµ�, array length�� �Ѵ�.
	//C++������ array�� .size(), java������ .length()�� mehtod�� ������ �ִ�. (a - instance)
	
	
	//���ڿ��� ���� ���� �ڹٶ� ����ϴ�. 
	string str = "wow";
	str += " ";
	str += "fantastic";
	
	cout << str.size() << "\n";
	cout << a << "\n";
	 
} 
 
 
 
 int main(){
	
	//�ƹ��͵� ��ȯ���� �ʴ´�. 
	voidFunction();
	
	//int���� ��ȯ���ش� 
	int returnInt = returnIntFunction();
	
	//c++�ϰ� Java�ϰ� �� �κп����� �ٸ���, print�Ҷ� cout���� �׳� �ص� �Ǵµ�, C���ó�� printf�� ���� ���������. 
	printf("���� %d �Դϴ�.", returnInt);
	cout << returnInt << " " << "int ���Դϴ�" << "\n"; // C++ iostream�� �� ���ϱ� ��. 
	
	
	//double���� ��ȯ���ش� 
	double returnDouble = returnDoubleFunction();
	cout << returnDouble << " " << "double ���Դϴ�" <<"\n"; 
	
	
	//cahr���� ��ȯ���ش�
	char returnChar = charFunction();
	cout << returnChar << " " << "char ���Դϴ�" << "\n"; 
	
	
	//string ���ڿ�
	stringFunction();
	
	return 0;
 	
 }
