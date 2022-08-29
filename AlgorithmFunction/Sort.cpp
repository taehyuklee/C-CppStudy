#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

std::vector<int> a; //vector도 std namespace안에 있다. (처음에는 다 이렇게 표기하자) 
int b[5];

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
	
	return 0;
}
