//초기화 방법 

#include<stdio.h>
#include<iostream>
#include<algorithm>

#define M 3
#define N 4

using namespace std;

int main(){
	
	//1차원 vector에 관해서 
	vector<int> v1[10]; //v1벡터를 10개를 생성한다. 
	for(vector<int> a: v1) cout << &a << " ";  //확실히 *와 &를 정확히 구분할줄 알아야 한다.
	cout << '\n';
	
	int n =5;
	vector<int> v2(n,0); //0이라는 value를 가진 n개의 벡터를 생성
	for(int a : v2) cout << a << " "; 
	
	//1차원 vector 초기화
	//fill(v1.begin(), v1.end(),0); //이렇게 vector 10개가 있으면 이 모든 vector를 어떻게 초기화 해야하는가? 
	fill(v2.begin(), v2.end(),0); 
	
	//2차원 vector에 관해서
	vector<vector<int>> checked;
	vector<vector<int>> v3 (n+1, vector<int> (n+1,0)); //2차원 vector안에 또 1차원 vector가 존재한다. 3차원 vector
	
	
	//2차원 vector 초기화 방법  
	// Vector 요소를 채울 기본값을 지정합니다.
    int default_value = 1;
 
    // 채우기 생성자를 사용하여 2차원 Vector 초기화
    // 주어진 기본값으로
    vector<vector<int>> matrix(M, vector<int>(N, default_value));
    // 2차원 내부 vector<int>에 들어갈 것을 matrix() 뒤에 넣어주는 것 
	/*
	{ {1, 1, 1, ... 1, 1}, {1, 1, 1, ... 1, 1}, {1, 1, 1, ... 1, 1}, {1, 1, 1, ... 1, 1}, ..... , {1, 1, 1, ... 1, 1}} 
	- 내부에 {}가 M개 생긴다. 그리고 그 {} vector이기때문에  vector<int>(N, default_value)로 형을 맞춰 주는 것이다. 
	  그리고 그 내부에 {} vector안에는 N개의 1(default_value)가 들어가게 된다. 
	  
	  보통 vector - 동적배열은 Java에서 ArrayList와 같다. 
	*/
	 
    cout << "\n";
    //2차원 배열 이렇게 하는건가? 출력을? 
    for(vector<int> a : matrix){
    	for(int b: a){
    		cout << b;
		}
		cout << "\n";
	}
    cout << "\n";
    
    vector<vector<int>> test {{2,3,4,5}, {7,8,9}};
    
    
    //2차원 배열 이렇게 하는건가? 출력을? 
    for(vector<int> a : test){
    	for(int b: a){
    		cout << b << "\n";
		}
	}
   
    cout << "\n"; 
    cout << matrix.size() << '\n';
    cout << "\n";
    cout << sizeof(matrix) << '\n'; //sizeof() 함수는 메모리 공간을 차지하는 byte수를 return
	// https://mg729.github.io/c++/2019/09/14/C++_sizeof-function/ 
	
//	memset(matrix, 0, sizeof(checked));
	
	int dp[10][10];
	for(int i=0 ; i<10; i++) fill(dp[i], dp[i]+10, 0);
	
	int k = 199;
	fill(&dp[0][0], &dp[0][0] + 10*10, k);  
 
	
	return 0; 
	
}
