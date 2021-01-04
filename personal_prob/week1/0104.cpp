//sw expert academy d2. 1945. 소인수분해
#include<iostream>
using namespace std;

int main() {
	int t;		//test case 의 수
	int num[100];
	int pow[5] = { 0 };		//2,3,5,7,11의 계수
	printf("input number of test case: ");
	scanf_s("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf_s("%d", &num[i]);
	}

	for (int i = 0; i < t; i++) {
		while (true) {
			if (num[i] % 2 == 0) {
				num[i] /= 2;
				pow[0]++;
			}
			else if (num[i] % 3 == 0) {
				num[i] /= 3;
				pow[1]++;
			}

			else if (num[i] % 5 == 0) {
				num[i] /= 5;
				pow[2]++;
			}

			else if (num[i] % 7 == 0) {
				num[i] /= 7;
				pow[3]++;
			}
			else if (num[i] % 11 == 0) {
				num[i] /= 11;
				pow[4]++;
			}
			else
				break;
		}

		printf("#%d %d %d %d %d %d\n", i+1, pow[0],pow[1],pow[2],pow[3],pow[4]);
		for (int i = 0; i < 5; i++) {
			pow[i] = 0;
		}
	}

}
