//Vector 자료구조
#include<iostream>
#include<stdio.h>
#include<utility>
#include<algorithm>

/*벡터(Vector)
 벡터란?  동적으로 요소를 할당할 수 있는 동적 배열이다 (동적 배열이란 것은? - 자료구조 공부하면서 익혀보자)
 컴파일 시점에 배열의 갯수를 알지 못한다면 벡터를 사용해야 한다. - 중복 허용, 순서가 있고 랜덤 접근이 가능하다
 
 Time Complexity 
 - 맨 뒤의 요소를 삭제하거나 삽입하는데 O(1)이 걸린다.  [1, 2, 3, 4, 5] <- 5가 맨 뒤 맨 
 - 맨 뒤나 맨 앞이 아닌 요소를 삭제하고 삽입하는데 O(n)의 시간이 걸린다. 
*/

using namespace std; 

vector<int> v;

//vector를 크기를 정해놓고 사용할수도 있다 
vector<int> v1(5, 100); //크기가 5인 vector에 100으로 채워 넣게 된다. 


bool cmp(int a, int b){
	return a>b;
}

int main(void){
	
	for(int i=1 ; i<=10; i++) v.push_back(i); // vector 뒤에서부터 요소를 더할때 push_back method를 사용하게 된다. 
	
	sort(v.begin(), v.end(), cmp); 
	
	for(int a:v) cout << a << " ";
	
	cout << '\n';
	
	//---------------erase써서 원소 지우기 (pop하는게 아니라 아예 지우는거임) ---------------------------//
	v.erase(v.begin(), v.begin()+1); // vector index접근 꼭 v.begin으로 해야하나? v[i] index로 접근할수도 있다. 
	//처음 원소 하나가 지워지겠지?
	
	for(int a: v) cout << a << " ";
	cout << '\n'; 
	
	//--------------- find함수에 대한 것 ------------------// 
	//find는 원소를 찾아주긴 하는데 index는 어디있는지 알수 없다. (찾을때 begin부터 end까지 순서대로 찾아본다) 
	//만약 찾게 된다면, 거기서 a에 찾은 값을 반환한다. 
	auto a = find(v.begin(), v.end(), 3); 
	cout << *a << " " << '\n'; //c++에서 주소에 있는 값을 뽑을려면? * 별을 쳐주면 된다. 
	
	//만약 못찾는다면? 앞에서 선언된 a는 여기서 다시 선언되지 않는다. 
	auto b = find(v.begin(), v.end(), 100); // 100원소는 현재 vector안에 존재하지 않는다.
	if(b == v.end() && *b != 100) cout << "not found" << '\n'; //마지막이 내가 찾는 원소일수 있으니까  
	//참고로 위에서 그냥 b를 출력하게되면 주소값이 출력되게 된다. 
	
	//--------------- fill 함수 -------------------//
	fill(v.begin(), v.end(), 10); //어디서부터 어디까지 10으로 replace하는 것이 됨 
	for (int a : v) cout << a << " ";
	cout << '\n';
	
	//참고로 vector 또한 다음과 같이 넣을수 있다. (fill대신 사용가능하다) 
	v[2] = 3;
	
	for (int a : v) cout << a << " ";
	cout<<'\n';
	
	//--------------- clear 함수 vector안에 모든 것을 지우자 ------------------//
	v.clear();
	cout << "과연 있을가?\n";
	for (int a : v) cout << a << " ";
	cout << '\n'; 
	
	//-------------- 크기가 정해진 vector v1 -----------------//
	for(int a : v1) cout << a << " " ;
	cout << '\n';
	
	//처음에 크기가 정해진 vector또한 동적배열이기에 당연히 push_back이 가능하겠지?
	v1.push_back(9999);
	for(int a : v1) cout << a << " " ;
	cout << '\n';
	
	//pop_back 가능한건가? ㄴㄴ vector는 pop해도 반환이 되지 않는다. 
	v1.pop_back(); 
	for(int a : v1) cout << a << " " ; 
	cout << '\n';
	
	//맨 앞에꺼 조회할려면?
	int returnFront = v1.front(); 
	// 알아서 pop하고 지우지 않으면 이렇게 지워야 한다. 
	v1.erase(v1.begin(), v1.begin()+1); //첫번째 요소를 지운다. 
	
	cout << returnFront << " ";
	cout << '\n'; //과연 지워질까? 안지워짐.  
	for(int a : v1) cout << a << " ";

	return 0;
} 

/*
결과값

10 9 8 7 6 5 4 3 2 1
9 8 7 6 5 4 3 2 1
3
not found
10 10 10 10 10 10 10 10 10
10 10 3 10 10 10 10 10 10
과연 있을가? 

*/
