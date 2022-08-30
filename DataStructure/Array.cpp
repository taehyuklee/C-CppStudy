//Array - 정적배열
/*
1. Array는 연속된 메모리 공간이며 스택 메모리에 할당됩니다.
2. 컴파일 단계에서 크기가 결정된다
3. c스타일과 std스타일이 있는데 c스타일을 중심으로 배운다 
   c스타일 - int a[N], c++ 스타일 - array<int, 10> a; 이런식으로 한다.
4. 알고리즘 문제가 있다면, 미리 최대 크기를 알고 정해놓아야 한다. 
*/ 

#include<stdio.h>
#include<iostream>
#include<algorithm>

using namespace std;

int v[10];

int main(){
	
	for(int i=0; i<=10; i++) v[i-1] = i;
	
	for(int a: v) cout << a << " "; //오! C스타일의 정적 배열또한 향상된 for문이 먹네?
	cout << '\n';
	
	auto a = find(v, v+10, 100); //앞서 find에 대해서 배웠다 (vector에서) 참고로, find는 algorithm안에 존재한다. 
	if(a == v+10 && *a != 100) cout << "not found" << '\n'; 
	
	//배열의 초기화  
	fill(v, v+10, 10); //fill은 동적 배열이든 정적 배열이든 둘 다 해당된다.랴노 
	for(int a: v) cout << a << " ";
	cout << '\n';
	
	//vector에 비해 erase, push_back, front, back 등의 다양한 method들이 존재하지 않기때문에 거의 index접근하고 index로 넣어줘야 한다. 
	
	return 0; 
	
}
