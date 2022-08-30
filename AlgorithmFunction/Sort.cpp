#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

std::vector<int> a; //vector도 std namespace안에 있다. (처음에는 다 이렇게 표기하자) 
int b[5];
std::vector<pair<int, int>> v; // vector(as like list)안에 다른 자료구조를 넣었을때 예를 들어 piar, tuple 등 
std::vector<pair<int, int>> v1;

bool cmp(pair<int, int> a, pair<int, int> b){
	return a.first > b.first;
}

int main(){
	
	for (int i=5; i>=1; i--){
		b[i-1] = i; // b[0] ~ b[4]까지 있으니까 
	}
	
	//vector에 넣기 위해서는 push_back이라는 method를 사용한다
	for(int i=5; i>=1; i--){
		a.push_back(i);
	} 
	
	for(int i=0; i<5 ; i++){
		std::cout << b[i] << " " << a[i] << '\n';
	}
	//vecot index접근이 위와 같이 가능하다. 
	//Java List index접근은 .get(i)가 되고 array[]의 접근은 위와같이 []접근이 가능하다.
	//Java의 list와 c++의 list 둘다 index접근은 가능하나 []와 .get(i) 방식이 다르다. 
	
	//오름차순
	std::cout <<b <<'\n'; //당연히 array b를 가져오면  
	sort(b, b+5);  //sort는 algorithm안에 있다. b를 하면 어차피 pointer는 배열의 맨 처음을 가리키고 있으니까 그런듯 
	sort(a.begin(), a.end()); //vector의 맨 처음 a.begin() 마지막 a.end()로 표현함. sort(처음, 마지막) 
	
	//Java처럼 향상된 for문을 쓰기도 하는구나 array - b, vector -a 모두 인자들의 datatype이 int이므로 
	//Java에서 List for문 돌릴때 for(Dto dto: dtoList) 로 하는 것처럼. 
	for (int i :b) cout << i << ' ';
	cout << '\n';
	for (int i :a) cout << i << ' ';
	cout << '\n';	 
	
	//sort의 default는 오름차순 
	
	//내림차순
	sort(b, b+5, greater<int>()); 
	sort(a.begin(), a.end(), greater<int>());
	for (int i :b) cout << i << ' ';
	cout << '\n';
	for (int i :a) cout << i << ' ';
	cout << '\n';	  
	
	
	//vector안에 다른 자료구조 예를 들어 pair나 또 다른 vector가 있어도 sort가 될수 있을까?
	for(int i=10; i>=1; i--){
		v.push_back({i, 10-i});
	} 
	
	sort(v.begin(), v.end()); //pair 자료구조의 첫 번째 인자를 기준으로 sort가 된다. 
	
	for(auto it : v) cout << it.first << ":" << it.second << "\n";
	
	//참고로 여기서 auto는 형이 정해져 있지 않은 형을 뜻한다. Java에서 var로 받아오는 것과 같은 의미이다.
	//가끔 시간이 없을때 pair<int, int>보다 auto가 코드가 좀 더 짧게 먹기 때문에 좋다. 물론 동적으로 받는 것이기에 무슨 부작용이 있을지 모른다.
	//auto는 pair, tuple, struct에 있는 값을 기반으로 순회할 때 쓰면 좀 더 빠르게 코드를 짤수 있다. 
	
	for (int i=10; i>=1; i--){
		v1.push_back({i, 10-i});
	}
	
	sort(v1.begin(), v1.end(), cmp);
	
	for(auto it : v) cout << it.first << ":" << it.second << "\n";
	
	//Operator는 struct를 설명할때 자세히 배운다고 한다. 
	
	
	return 0;
}
