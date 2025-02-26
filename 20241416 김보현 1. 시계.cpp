#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

void timecompute();
void timeprint(int y, int m, int d, int hour, int min, int x);
void fillarray(int arr[][70], int num[], int m);

void fillarray(int arr[][70], int num[], int m) {
	int i = 8 * (m / 10);
	int j = 7 * m - 70 * (m / 10);

	switch (num[m]) {
	case 0:
		arr[i][j + 1] = 1;
		arr[i][j + 2] = 1;
		arr[i + 1][j] = 1;
		arr[i + 1][j + 4] = 1;
		arr[i + 2][j] = 1;
		arr[i + 2][j + 4] = 1;
		arr[i + 3][j] = 1;
		arr[i + 3][j + 4] = 1;
		arr[i + 4][j + 1] = 1;
		arr[i + 4][j + 2] = 1;
		break;
	case 1:
		arr[i][j + 2] = 1;
		arr[i + 1][j + 2] = 1;
		arr[i + 2][j + 2] = 1;
		arr[i + 3][j + 2] = 1;
		arr[i + 4][j + 2] = 1;
		break;
	case 2:
		arr[i][j + 2] = 1;
		arr[i][j + 3] = 1;
		arr[i + 1][j + 1] = 1;
		arr[i + 1][j + 4] = 1;
		arr[i + 2][j + 3] = 1;
		arr[i + 3][j + 2] = 1;
		arr[i + 4][j + 1] = 1;
		arr[i + 4][j + 2] = 1;
		arr[i + 4][j + 3] = 1;
		break;
	case 3:
		arr[i][j + 1] = 1;
		arr[i][j + 2] = 1;
		arr[i][j + 3] = 1;
		arr[i + 1][j + 4] = 1;
		arr[i + 2][j + 2] = 1;
		arr[i + 2][j + 3] = 1;
		arr[i + 3][j + 4] = 1;
		arr[i + 4][j + 1] = 1;
		arr[i + 4][j + 2] = 1;
		arr[i + 4][j + 3] = 1;
		break;
	case 4:
		arr[i][j + 3] = 1;
		arr[i + 1][j + 2] = 1;
		arr[i + 1][j + 3] = 1;
		arr[i + 2][j + 1] = 1;
		arr[i + 2][j + 3] = 1;
		arr[i + 3][j + 1] = 1;
		arr[i + 3][j + 2] = 1;
		arr[i + 3][j + 3] = 1;
		arr[i + 3][j + 4] = 1;
		arr[i + 4][j + 3] = 1;
		break;
	case 5:
		arr[i][j + 1] = 1;
		arr[i][j + 2] = 1;
		arr[i][j + 3] = 1;
		arr[i + 1][j + 1] = 1;
		arr[i + 2][j + 1] = 1;
		arr[i + 2][j + 2] = 1;
		arr[i + 2][j + 3] = 1;
		arr[i + 3][j + 3] = 1;
		arr[i + 4][j + 1] = 1;
		arr[i + 4][j + 2] = 1;
		arr[i + 4][j + 3] = 1;
		break;
	case 6:
		arr[i][j + 2] = 1;
		arr[i][j + 3] = 1;
		arr[i + 1][j + 1] = 1;
		arr[i + 2][j + 1] = 1;
		arr[i + 2][j + 2] = 1;
		arr[i + 2][j + 3] = 1;
		arr[i + 3][j + 1] = 1;
		arr[i + 3][j + 4] = 1;
		arr[i + 4][j + 2] = 1;
		arr[i + 4][j + 3] = 1;
		break;
	case 7:
		arr[i][j + 1] = 1;
		arr[i][j + 2] = 1;
		arr[i][j + 3] = 1;
		arr[i + 1][j + 3] = 1;
		arr[i + 2][j + 3] = 1;
		arr[i + 3][j + 2] = 1;
		arr[i + 4][j + 1] = 1;
		break;
	case 8:
		arr[i][j + 2] = 1;
		arr[i][j + 3] = 1;
		arr[i + 1][j + 1] = 1;
		arr[i + 1][j + 4] = 1;
		arr[i + 2][j + 2] = 1;
		arr[i + 2][j + 3] = 1;
		arr[i + 3][j + 1] = 1;
		arr[i + 3][j + 4] = 1;
		arr[i + 4][j + 2] = 1;
		arr[i + 4][j + 3] = 1;
		break;
	case 9:
		arr[i][j + 1] = 1;
		arr[i][j + 2] = 1;
		arr[i + 1][j] = 1;
		arr[i + 1][j + 3] = 1;
		arr[i + 2][j + 1] = 1;
		arr[i + 2][j + 2] = 1;
		arr[i + 2][j + 3] = 1;
		arr[i + 3][j + 3] = 1;
		arr[i + 4][j + 1] = 1;
		arr[i + 4][j + 2] = 1;
		break;
	case 10:
		arr[i][j + 4] = 1;
		arr[i + 1][j + 3] = 1;
		arr[i + 2][j + 2] = 1;
		arr[i + 3][j + 1] = 1;
		arr[i + 4][j] = 1;
		break;
	case 11:
		arr[i + 1][j + 1] = 1;
		arr[i + 1][j + 3] = 1;
		arr[i + 2][j + 1] = 1;
		arr[i + 2][j + 3] = 1;
		arr[i + 3][j + 1] = 1;
		arr[i + 3][j + 3] = 1;
		break;

	}
}

void timeprint(int y, int m, int d, int hour, int min, int x) {
	int num[18];
	num[0] = y / 1000;
	num[1] = (y % 1000) / 100;
	num[2] = (y % 100) / 10;
	num[3] = y % 10;
	num[4] = 10; //슬래시
	num[5] = (m / 10); 
	num[6] = (m % 10); 
	num[7] = 10; //슬래시
	num[8] = (d / 10);
	num[9] = (d % 10);
	num[10] = (hour / 10);
	num[11] = (hour % 10);
	num[12] = 11; //점
	num[13] = (min / 10);
	num[14] = (min % 10);
	num[15] = 11; //점
	num[16] = (x / 10);
	num[17] = (x % 10);

	int arr[13][70] = { 0, }; //일단 int배열로 받고 최종 출력할 떄 기호로 변환하면 됨

	for (int m = 0; m < 18; m++) {
		fillarray(arr, num, m);
	}

	for (int i = 0; i < 13; i++) { //배열 출력
		for (int j = 0; j < 70; j++) {
			switch (arr[i][j]) {
			case 0:
				printf(" ");
				break;
			case 1:
				printf("*");
				break;
			}
		}
		printf("\n");

	}
}

void timecompute() {
	int x = time(NULL)+9*60*60; //애초에 한국시간에 맞춰버리자 

	int y = 1970;
	int m = 1;
	int d = 1;
	int hour = 0;
	int min = 0;
	//일단 기본 세팅, 여기서 늘려나가기

	int pyeong = 60 * 60 * 24 * 365; //1년을 초단위로
	int yoon = 60 * 60 * 24 * 366;

	for (y = 1970; x > pyeong; y++) { //연도 계산
		if ((y % 400 == 0))
			x -= yoon;
		else if ((y % 100 == 0))
			x -= pyeong;
		else if (y % 4 == 0)
			x -= yoon;
		else
			x -= pyeong;
	}

	//printf("x:%d\n", x); //연도 계산하고 남은 초
	//printf("y:%d\n", y); //연도

	int oneday = 60 * 60 * 24;

	for (m = 1; x > 31 * oneday; m++) {
			if ((m == 1) || (m == 3) || (m == 5) || (m == 7) || (m == 8) || (m == 10))
				x -= 31 * oneday;
			else if ((m == 4) || (m == 6) || (m == 9) || (m == 11))
				x -= 30 * oneday;
			else if (m == 2)
				if ((y % 400 == 0))
					x -= 29 * oneday;
				else if ((y % 100 == 0))
					x -= 28 * oneday;
				else if (y % 4 == 0)
					x -= 29 * oneday;
				else
					x -= 28 * oneday;
		} 


		//printf("x:%d\n", x); //월 계산하고 남은 초
		//printf("m:%d\n", m); //월

		for (d = 1; x > oneday; d++) {
			x -= oneday;
		}

		//printf("x:%d\n", x); //일 계산하고 남은 초
		//printf("d:%d\n", d); //일

		for (hour = 0; x > 60 * 60; hour++) { 
			x -= 60 * 60;
		}

		//printf("x:%d\n", x); //시 계산하고 남은 초
		//printf("hour:%d\n", hour); 

		for (min = 0; x > 60; min++) {
			x -= 60;
		}

		//printf("x:%d\n", x); //분 계산하고 남은 초
		//printf("min:%d\n", min); //분
		//printf("x:%d\n", x);//남은 초

		timeprint(y, m, d, hour, min, x);

	}


	int main() {
		while (1) {
			timecompute();
			Sleep(5000);
			system("cls"); //5초마다 화면 지우고 다시 새로고침
		}
	}
