#include <iostream>
#include <string>

#include "BicycleCollection.h"
#include "MemberCollection.h"
#include "SignUp.h"
#include "Login.h"
#include "LogOut.h"
#include "RegisterBicycle.h"

// DECLARE CONSTANTS
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// DECLARE FUNCTIONS
void doTask();
void join();
void program_exit();

// DECLARE VARIABLES
fstream out_fp;
fstream in_fp;

using namespace std;

int main()
{
    // INITIALIZE FOR FILE MANIPULATION
    in_fp.open(INPUT_FILE_NAME);
    out_fp.open(OUTPUT_FILE_NAME);

    BicycleCollection bicycleData;
    MemberCollection memberData;

    doTask();

    out_fp.close();
    in_fp.close();

    return 0;
}

void doTask()
{
    // 메뉴 파싱을 위한 level 구분을 위한 변수
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    while (!is_program_exit)
    {
        // 입력파일에서 메뉴 숫자 2개를 읽기
        in_fp >> menu_level_1 >> menu_level_2;

        // 메뉴 구분 및 해당 연산 수행
        switch (menu_level_1)
        {
        case 1:
        {
            switch (menu_level_2)
            {
            case 1: // "1.1. 회원가입“ 메뉴 부분
            {
                // 해당 기능 수행
                
                break;
            }
            case 2:
            {

                break;
            }
            }
        case 2:
        
        case 7:
        {
            switch (menu_level_2)
            {
            case 1: // "6.1. 종료“ 메뉴 부분
            {
                is_program_exit = 1;
                break;
                ;
            }
            }
        }
        }
        }
    }
}

/*
 * 단순히 파일을 통해 입출력하는 방법을 보이기 위한 것이므로 실제 이 함수를 사용하면 안됨.
 * 위의 switch 문에서 control 및 boundary class를 이용해서 이 기능이 구현되도록 해야 함.
void join()
{

    char user_type[MAX_STRING], name[MAX_STRING], SSN[MAX_STRING],
        address[MAX_STRING], ID[MAX_STRING], password[MAX_STRING];

    // 입력 형식 : 이름, 주민번호, ID, Password를 파일로부터 읽음
    in_fp >> name >> SSN >> ID >> password;

    // 해당 기능 수행

    // 출력 형식
    out_fp << "1.1. 회원가입" << endl;
    out_fp << name << SSN << ID << password << endl;
}
*/