#include<iostream>
#include<stdio.h>

using namespace std;
typedef long long ll;

double a = 1.23456789;
int b = 2;

int main(){
	printf("%.6lf\n", a);
	printf("%02d\n", b);
	//C언어 처럼 printf를 이용해서 위와같이 표현할수도 있다. 
	/*
	1.234568
	02
	*/
}
//형식 지정자 또한 알아야 출력 가능하다.
