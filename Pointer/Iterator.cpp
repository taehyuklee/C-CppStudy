//Iterator
#include <iostream>
#include <vector>

using namespace std;

vector<int> v;

int main(){
	
	for (int i=1; i < 5; i++) v.push_back(i);
	for (int i=0; i < 5; i++){
		cout << i << "번째 요소 :" << *(v.begin()+ i) << "\n";
		cout << &*(v.begin() + i) << "\n";
	}
	cout << "\n";
	cout << *v.begin();
	//cout << v.begin();
	//Iterator는 바로 출력하려고 하면 에러가 발생한다 -> 이터레이터는 주소값을 바로 반환하지 않는다. 
	//즉, 주소를 가리키고 있어 *로 참조값을 가져올수 있지만, 주소를 표현하려면 &*를 통해서 가져와야 한다. 
}
