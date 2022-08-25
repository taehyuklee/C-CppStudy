#include<iostream>
#include<stdio.h>

using namespace std;
string s;
string n;
string g;

int main(){
	/*만약 내가 "하이 나는 감팡이야"를 넣었다 과연 s에 다 들어가서 그대로 출력될수 있을까? 
	결과적으로는 아니다. 왜냐? cin은 개행문자를 구분해서 받는다고 했다. 즉 "하이 " <-이게 나오는 순간 끊기고 그 다음 "나는 "은 받을게 없다. 
	 
	cin >> s;
	cout <<s;
	만약 굳이 모두 받아서 출력 하겠다면
	cin >> s >> n;
	cout <<s << n; 
	위와 같은 방법이 존재하긴 하지만, 그러면 띄어쓸때다 또는 줄바꿈할때마다(개행문자를 마주칠대마다) 새로운 string 문자열 변수가 필요할 것이다.
	그래서 getline함수가 나왔다.*/
	
	getline(cin, g); 
	cout << g << "\n";
	
	/*나는 감팡이야 하이 <-입력
	나는 감팡이야 하이 <- 출력*/
	
	return 0;
	
}
