#include <stdio.h>
#include <string.h> // strcmp 함수가 선언된 헤더 파일

char day[10]; // 전역 변수 선언 및 초기화

int main(void){
	Line();
	Form();
	Line();
}

void Day(void){ // 함수 정의와 선언
	if (strcmp(day, "월요일") == 0){
		printf("%s : 청국장", day);
	}
	else if (strcmp(day, "화요일") == 0){
		printf("%s : 비빔밥", day);
	}
	else if (strcmp(day, "수요일") == 0){
		printf("%s : 된장찌개", day);
	}
	else if (strcmp(day, "목요일") == 0){
		printf("%s : 칼국수", day);
	}
	else if (strcmp(day, "금요일") == 0){
		printf("%s : 냉면", day);
	}
	else if (strcmp(day, "토요일") == 0){
		printf("%s : 소불고기", day);
	}
	else if (strcmp(day, "일요일") == 0){
		printf("%s : 오삼불고기", day);
	}
	else {
		printf("잘못 입력하셨습니다.");
	}
}

void Form(void){
	printf("요일을 입력해주세요 : ");
	scanf("%s", &day);
	Day();
}

void Line(void){
	printf("\n");
	printf("\n");
	printf("\n");
	printf("===========================================");
	printf("\n");
	printf("\n");
	printf("\n");
}
