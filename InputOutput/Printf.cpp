#include<iostream>
#include<stdio.h>

using namespace std;
typedef long long ll;

double a = 1.23456789;
int b = 2;
char s = 'a';
string str = "하이 나는 감팡이야";


int main(){
	printf("%.6lf\n", a);
	printf("%02d\n", b);
	printf("문자 하나 : %c\n", s);
	printf("문자열 출력 : %s\n", str.c_str());
	//C언어 처럼 printf를 이용해서 위와같이 표현할수도 있다. 
	
	/*
	1.234568
	02
	문자 하나 : a
	문자열 출력 : 하이 나는 감팡이야 (str.c_str()의 반환은 첫 번째 char의 * pointer를 return한다 const *char)
	*/
	
	return 0;
}
