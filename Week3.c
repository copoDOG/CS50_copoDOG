#include <stdio.h>
#include <string.h>
#include <ctype.h> // isdigit 함수사용
#include <stdlib.h> // atoi 함수 사용

const int NUMBER_OF_GRADES = 9;
// printGradeTable() 함수를 사용하기 위하여 타입을 char 형태로 통일하기 위해 점수도 스트링 타입으로 입력
const char *GRADE_POINTS[NUMBER_OF_GRADES] = {"95", "90", "85", "80", "75", "70", "65", "60", "0"};
const char *GRADES[NUMBER_OF_GRADES] = {"A+", "A", "B+", "B", "C+", "C", "D+", "D", "F"};

void printGradeTable(char *label, const char *target[]); //학점테이블을 출력하기 위한 함수
int checkNum(char *str); // 숫자 처리 함수
int resultGradePoint(int numGrade, int length); //결과 값 출력을 위한 판별 및 출력 함수

int main(void) {
    char strGrade[4];
    printf("학점프로그램\n");
    printf("종료를 원하면 \"999\" 를 입력\n");
    printf("[학점 테이블]\n");
    printGradeTable("점수", GRADE_POINTS);
    printf("\n");
    printGradeTable("학점", GRADES);
    printf("\n");
	
	//성적을 입력하기전에 학점테이블이 보이게 하기 위한 부분
    int arrNum = sizeof(GRADE_POINTS) / sizeof(GRADE_POINTS[0]); //배열의 크기를 나타내는 sizeof 사용

    while(1) {
		//참일 경우(항상)
        int numGrade;
        printf("성적을 입력하세요 (0 ~ 100) : ");
        scanf("%s", strGrade);
        if (checkNum(strGrade) == -1) { //조건문
            printf("숫자가 아닙니다 프로그램을 종료합니다.\n"); //만족한다면 출력
            break;
        }
		
		//atoi 함수를 이용해 문자 정수(strGrade)를 숫자(numGrade)로 변환
        numGrade = atoi(strGrade);

        if (numGrade == 999) { //조건문
            printf("학점 프로그램을 종료합니다.\n"); //만족한다면 출력
            break; // 999를 입력할 경우 프로그램이 종료됨
        }
        if(numGrade > 100 || numGrade < 0) { //조건문
            printf("** %d 성적을 올바르게 입력하세요! (0 ~ 100)\n", numGrade); //만족한다면 출력
            continue;
        }

        resultGradePoint(numGrade, arrNum);
    }
}

void printGradeTable(char *label, const char *target[]) {  //학점 테이블을 출력하기 위한 함수
    printf("%s : ", label);
    for (int i = 0; i < NUMBER_OF_GRADES; i++) { //반복문
        printf("%s\t", target[i];
    }
}

int checkNum(char *str) {
    int const length = strlen(str);
    int result;
	// 문자 정수 -> 문자배열로 취급하여 숫자인지 아닌지 하나씩 체크
    // 하나라도 숫자가 아니면 -1
    // ex) str = 20 => ["2", "0"] => isdigit() 함수로 문자가 숫자 문자인지 체크(연속된 문자가 아닌 한글자씩만 체크가능)
    for (int i = 0; i < length; i++) {
        if (isdigit(str[i]) == 0) {
            // 숫자가 아닐 경우
            result = -1;
            break;
        }
        result = 0;
    }
    return result;
}

int resultGradePoint(int numGrade, int length) {// 결과 값을 출력해주기 위해 판별 및 출력을 해주는 기능
    for (int j = 0; j < length; j++) {
        if (numGrade == 0) {// 조건문
            printf("학점은 F 입니다.\n"); // 만족하면 출력
            break;
        }
        if (numGrade >= 95) {// 조건문
            printf("학점은 A+ 입니다.\n");// 만족하면 출력
            break;
        }
        if (atoi(GRADE_POINTS[j]) >= numGrade && atoi(GRADE_POINTS[j + 1]) <= numGrade) {// 조건문
            printf("학점은 %s 입니다.\n", GRADES[j + 1]);// 만족하면 출력
            break;
        }
    }
    return -1;
}
			   
			   
			   
			   
			   
			   
			   
			   
			   
			   
			   
			   
			   
			   
			   
			   
			   
			   
			   
			 