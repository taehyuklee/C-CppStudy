//백준에서 나온 문제들처럼

/*
4 4
1000
0000
0111
0000
이런 Input은 어떻게 입력 받을까? 

2가지 방법이 있다고 한다. 

*/ 

#include <iostream>
#include <stdio.h> 

using namespace std;



int main(){
	
	int n, m;
	string s; 
	//int ab[10000][10000];
	//int a[1000][1000], xsize,ysize; 이렇게 들어가는 순간 아무것도 출력되지 않는다. 1000 by 1000을 받아들이지 못하는 것 같다. 
	//global 변수로 빼내면 또 괜찮아진다. 

	cin >> n >> m; // 띄어쓰기는 이렇게 그냥 받아지네  
	cout << n << " " << m << "\n";
	for(int i =0; i<n; i ++){
		cin >> s;
		cout << s << "\n";
	}

	//참고로 cin으로 받을 때는 개행문자(띄어쓰기, 한줄듸기)까지 받을수 있다. 
	//즉, 1000 \n 한칸 띄어지고 0000 \n 한칸 띄어지고 0111 \n 한칸 띄어지고 0000 이런식으로 된다. 
	
	//C언어 답게 받기 scanf 
	//아래 있는 코드를 같이 쓰면 바로 꺼지는데 왜 그런거지? 
	int a[100][100], xsize,ysize;
	printf("\n");

	cin >> xsize >> ysize;
	for (int i=0; i <xsize ; i++){
		for(int j=0; j<ysize ; j++){
			scanf("%1d", &a[i][j]);
		}
	}
		
	
	return 0;
	
}
