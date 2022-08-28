#include<iostream>
#include<vector>

using namespace std;
string lol = "amumu is in the bush";



//문자열 쪼개기 split함수 (띄어쓰기, 콤마 등 (delimiter 구분문자)을 기준으로 문자열을 쪼개는 기능은 따로 지원하지 않는다) 
vector<string> split(string input, string delimiter) {
	vector<string> ret;
	long long pos = 0;
	string token = "";

	while ((pos=input.find(delimiter)) != string::npos) { //input.find(delimiter) 그 구분자가 있는 위치를 찍어준다.
		token = input.substr(0, pos);
		ret.push_back(token);
		input.erase(0, pos + delimiter.length());
	}
	cout << input << '\n';
	ret.push_back(input);
	return ret;
}



int main(void) {

	cout << lol << "\n";

	cout << lol.find("amumu") << "\n"; // 출력: 0 
	cout << lol.find("holll") << "\n"; // 출력: 18446744073709551615
	cout << string::npos << "\n"; // 출력: 18446744073709551615
	//string 밑에 npos라는 method가 있겠지?

	//string의 find method
	if (lol.find("amumu") != string::npos) { //찾아서 나오지 않으면 string::npos를 출력한다 string객체 밑에 npos라는 method가 있다 생각하자
		cout << "lol속에 아무무가 있다! \n";
	}
	
	//substr - string에서 char[0] ~ char[2]까지 출력하는 method라 생각하면 됨  
	cout << lol.substr(0, 3) << "\n"; // 

	//begin & end
	//cout << lol.begin() << "\n";
	//cout << lol.end() << "\n";

	//reverse (거꾸로 변환하는 문법) <정확한 기작원리는 추후에 좀 더 파보자>
	reverse(lol.begin(), lol.begin());

	cout << lol << "\n";

	vector<string> splited = split("안녕 나는 이태혁이라고 해!", " ");

	for (string a : splited) {
		cout << a <<"\n";
	}

	return 0;
}
