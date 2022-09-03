#include<iostream>

using namespace std;


void update_array(int arr[]){
	
	cout << arr <<"\n";

	for(int i=0; i < (sizeof arr/sizeof arr[0]); i++){
		cout << arr[i] << "\n";
	}
	//arr[1] = 15;
}
//arr자체는 pointer이기때문에 

void array_func(int *arr){
	
	cout << arr <<"\n";
	for(int i=0; i < (sizeof arr/sizeof arr[0]); i++){
		cout << arr[i] << "\n";
	}
}
//이것도 되네?

void integer(int *p){
	
	cout << "\n";
	cout << p;
	cout << "이게 되나?"<< "\n";
	
	for(int i=0; i < 4; i++){
		cout << p[i] << " "<< (p+i) << "\n";
		cout << "\n";
	}
	//그냥 pointer로 와도 array처럼 사용하면 p[i]형식 자체가 참조값을 불러오네 알아서 p+1 하면서 참조값을 불러오는 function처럼 작용함. 
}


 

int main(void){

	int numArr[5] = {1,5,2,3,6};
	int ab = 3;
	
	//array 자체는 &를 가져올수가 없다. 특정 위치의 주소를 가져와야 함 
	//C++에서 array에 대한 size를 구할때는 다음과 같이 구한다 
	int size =  sizeof numArr/sizeof numArr[0];
	cout <<size << "\n";
	
	update_array(numArr);
	update_array(&numArr[0]);
	
	array_func(numArr);
	integer(&ab);

	return 0;
}
