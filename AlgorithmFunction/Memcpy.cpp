//memcpy
/*어떤 변수의 메모리에 있는 값들을 다른 변수의 "특정 메모리값"으로 복사할 때 사용한다.
주로 배열을 복사할때 사용한다. */
#include<iostream>
#include<stdio.h>
#include<vector>

using namespace std;

int a[5];
int temp[5];

vector<int> v(5, 100);
vector<int> temp_vector;

int main(){
	
	//정적 배열에 대해서 복사해본다 
	for(int i=0; i<5; i++) a[i] = i;
	memcpy(temp, a, sizeof(a));
	
	for(int i: temp) cout << i << ' ';
	
	//동적 배열에 대해서 복새해보자
	for(int i=0; i<5; i++) cout << v[i] << '\n';
	//memcpy(temp_vector, v, sizeof(v));
	//동적 배열은 memcpy가 안되나? 
	 
	return 0;
}
