#include<utility>
#include<iostream>
#include<tuple>

using namespace std;

pair<int, int> pi;
tuple<int, int, int> tl;
//tuple의 경우 std와 tuple header를 모두 설정해놓아야하는데
//도대체 header와 namespace 어떤 관계로 되어 있을가? 
/*
iostream 안에 namespace가 존재한다. 그 namespace안에 여러 method들이 존재하는 것. 
그런데, pair는 어떤 전처리기에 들어가는 header들도 필요 없다.  
*/

int a, b, c; 
int x, y, z;

int main(){
	pi = {1,2}; //pair은 초기화(클래스는 생성자 이용)는 이와 같이한다. 
	tl = make_tuple(1,2,3); // tuple초기화는 왼쪽과 같이 make_tuple을 이용한다.
	 
	a = pi.first; //본래는 pi - pair자료구조에서 첫 번째꺼를 끄집어낼때는 왼쪽과 같이 pi.first , pi.second로 끄집어낸다. 
	b = pi.second;
	
	cout << a << " " << b << '\n'; 
	
	//하지만 한 번에 끄집어내는 key word가 있다 바로 'tie'이다
	pi = {2,3};
	tie(a,b) = pi; 
	
	cout << a << " " << b << '\n'; 
	
	
	//이번에는 tuple 자료구조에 대해서 알아보도록 하자. 
	//pair자료구조와 마찬가지로 tie를 서서 끄집어낼수 있다.
	tie(x,y,z) = tl;

	
	//또는
	x = get<0>(tl);
	y = get<1>(tl);
	z = get<2>(tl); 
	
	cout <<  x << y << z;
	//그리고 pair나 tuple을 받아오기 위한 변수들은 앞에 선언되어 있어야 한다. 
	
	return 0;
}
