#include<stdio.h>

int main(){
	printf("値を2つ入力しなさい。その2つの数字についての関係を求めます。\n");

	int n, m;

	scanf("%d %d", &n, &m);
	
	switch(n % m){
		case 0:
			printf("%dは%dの約数である。\n", m, n);
			break;
		default :
			switch(m % n){
				case 0:
					printf("%dは%dの約数である。\n", n, m);
					break;
				default :
					printf("%dと%dはなんの関係もありません（諸説あり）。\n", n, m);
					break;
			}
			break;
	}
	return 0;
}
		
