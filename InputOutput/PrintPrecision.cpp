#include<iostream>
#include<stdio.h>

//실수형 출력
using namespace std;
 
typedef long long ll;

double a = 1.23456789;

int main(){
	cout << a << "\n";
	cout.precision(7); //cout method에서 precision을 통해서 정수 + 소수 총 자리수를 구할수 있다.
	cout <<a << "\n";
	return 0;
}
