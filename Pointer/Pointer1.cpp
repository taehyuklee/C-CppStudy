//Pointer 개념

//주소 연산자 & 와 참조 연산자 * 
#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

int v[10];
int array[10];
int arr2[10][10];
int num_arr[10] = {1,2,3,4,5,6,7,8,9,10};
int arr[10];


void array_func(int *arr, int size){

	for(int i=0; i < size; i++){
		cout << *(arr+i) << "\n";
	}
}

//pointer로 직접 받아오는거 
void print_array(int *arr){
	
	cout<< "들어옴"<< "\n";
	cout << arr;
	cout<< "\n";
	cout << *arr;
	
	cout<< "\n";
	for(int i=0; i<3; i++) cout << *(arr+i);
	//for(int i=0 ; i <10; i++) cout << *arr[i];
	
	cout<< "\n";
	cout << "나옴"<< "\n";
	
}

//매개변수로 arr[]로 받아오는 것. 
void array_func(int arr[]){
	cout << "나열하고 업데이트"<<"\n";
	for(int i=0; i < sizeof(arr)/sizeof(arr[0]); i++){
		cout << *(arr+i) << "\n";
	}
	arr[2] = 15; 
	cout << arr[2];
	cout <<"\n";
	cout <<"\n";
}

void print_array2(int arr2[][10]){
	
	int (*arr)[10];
	
	cout << "\n";
	cout << arr2;
	
	cout <<"\n";
	for(int i=0 ; i <10; i++){
		for(int j=0; j<10; j++){
			cout << arr2[i][j];
		}
		cout <<"\n";
	}
}


int main(){

	int a = 231;
	int *b = &a; //pointer를 저장하는 변수를 선언하기 위해서는 *을 사용해야 한다. 
	
	cout << "Integer의 메모리 할당 크기" << " : " << sizeof(a) << '\n';
	cout << &a << '\n';
	cout << b << '\n';
	cout << *b << '\n';
	cout << "Pointer의 메모리 할당 크기" << " : " << sizeof(b) << '\n';
	cout << &b << '\n';
	cout << *b + 1 << '\n';
	cout << b+1 << '\n'; //포인터에 +1을 하면 기존 a가 할당된 변수의 memory에서 integer수만큼 주소가 더 더해진다 +4가 되겠지  
	
	cout << '\n' << '\n';

	
	//과연 메모리 셀마다 주소가 있는 것일까? 위의 경우 integer라서 포인터에 1을 더하면 주소에 4칸이 옮겨진다
	//과연 1byte를 먹는 c에서는 1칸이 옮겨질까에 대한 실험 이건 실험이 안됨
	//그래서 double로해서 8칸이 옮겨지나 실험해봄 ㅇㅇ 그렇게 됨. 
	double d = 123;
	double *p1 = &d;
	
	cout << d <<'\n';
	cout << &d << '\n';
	cout << p1 << '\n';
	cout << *p1 +1 << '\n';
	cout << p1+1 << '\n';
	cout <<'\n'; 
	
	//array
	cout << "array 함수"<< '\n';
	int numarr[3] = {1,5,3};
	print_array(numarr);
	array_func(numarr);
	cout << '\n';
	for(int i=0; i <3; i++) cout << numarr[i];
	cout << '\n';
	
	
	int numArr[4] = {1,5,2,3};
	
	//array 자체는 &를 가져올수가 없다. 특정 위치의 주소를 가져와야 함 
	//C++에서 array에 대한 size를 구할때는 다음과 같이 구한다 
	int size =  sizeof numArr/sizeof numArr[0];
	array_func(numArr , size);
	array_func(&numArr[0], size);

	return 0;
	
	
	
	//이번에는 정적 array, 동적 array에 대한 예제를 봐보도록 하자. 
	unordered_map<string, int> umap;
	
	umap.insert({"test1", 1});
	umap.emplace("test5",5);
	umap["test1"] = 4;
	
	for(auto element: umap){
		cout << element.first << "::" << element.second << '\n';
	}
	
	//map find
	auto search = umap.find("test1");
	cout << "found :" << (*search).first << " " << " " << (*search).second << '\n';
	
	cout << &search << '\n';
	cout << "\n";
	if(search != umap.end()){
		cout << "found :" << (*search).first << " " << " " << (*search).second << '\n';
	}
	
	//static array
	cout << &arr << '\n';
	cout << arr << '\n';
	
	//변수 이름 포인터 - 수정하고 싶은 데이터 

	//int array[10][10]; 
	
	//int &bb 
	
//	cout << '\n';
	//cout << &array2; // 뭐지 왜 array는 안되는거지? 
	
//	print_array(arr);
//	print_array2(arr2);

	return 0;
	
}
