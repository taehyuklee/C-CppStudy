// SpinLock Implementation

#include<iostream>

void testPointer(){
		
	//	int value = 10
	//	volatile int* lock = &value;
	int value = 10;
    int* lock = &value;  // lock은 value의 주소를 가짐
	
    std::cout << "lock: " << lock << std::endl;  // lock 변수 값 출력
    std::cout << "&lock: " << &lock << std::endl;  // lock의 메모리 주소 출력
    std::cout << "value:" << &value << std::endl;
    std::cout << "*lock: " << *lock << std::endl;  // lock의 메모리 

	//간단하게 생각해서는 Pointer형으로 선언한 것과 일반 integer형으로 선언한게 차이가 있다. 

}

int TestAndSet(int* lockPtr){
	int oldLock = *lockPtr;
	*lockPtr = 1;
	return oldLock;
}

void criticalSection(){
	int sum=0;
	for(int i=0; i<100000; i++){
		sum += i;
	}
	std::cout << sum << std::endl;
}

void lockup(int lock){
	while(TestAndSet(&lock)==1){
		
	};
}

void unlock(int lock){
	lock=0;
}



int main(void){
	
	volatile int lock =0;
	
	lockup(lock);
	
	criticalSection();
	
	unlock(lock);
	
}
