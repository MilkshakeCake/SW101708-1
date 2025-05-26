#include <iostream>
#include <fstream>
#include <string>

#include "BicycleCollection.h"
#include "MemberCollection.h"
#include "SignUp.h"
#include "SignUpUI.h"
#include "Login.h"
#include "LoginUI.h"
#include "LogOut.h"
#include "LogOutUI.h"
#include "RegisterBicycle.h"
#include "RegisterBicycleUI.h"
#include "RentBicycle.h"
#include "RentBicycleUI.h"
#include "QueryBicycle.h"
#include "QueryBicycleUI.h"

// DECLARE CONSTANTS
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// DECLARE FUNCTIONS
void doTask(BicycleCollection *bCollection, MemberCollection *mCollection);
void program_exit(BicycleCollection *bCollection, MemberCollection *mCollection);

// DECLARE VARIABLES
std::fstream out_fp;
std::fstream in_fp;

using namespace std;

int main()
{
    // INITIALIZE FOR FILE MANIPULATION
    in_fp.open(INPUT_FILE_NAME);
    out_fp.open(OUTPUT_FILE_NAME);

    BicycleCollection *bCollection = new BicycleCollection();
    MemberCollection *mCollection = new MemberCollection();

    doTask(bCollection, mCollection);

    out_fp.close();
    in_fp.close();

    return 0;
}

void doTask(BicycleCollection *bCollection, MemberCollection *mCollection)
{
    // 메뉴 파싱을 위한 level 구분을 위한 변수
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    while (!is_program_exit)
    {
        int menu_level_1 = 0, menu_level_2 = 0;

        // 입력파일에서 메뉴 숫자 2개를 읽기
        in_fp >> menu_level_1 >> menu_level_2;

        out_fp << menu_level_1 << '.' << menu_level_2;

        // 메뉴 구분 및 해당 연산 수행
        switch (menu_level_1)
        {
        // 1
        case 1:
        {
            switch (menu_level_2)
            {
            // 1.1 Sign Up
            case 1:
            {
                out_fp << ". 회원 가입\n";
                string id, pw, phone;
                in_fp >> id >> pw >> phone;
                SignUp signUpControl(mCollection);
                SignUpUI *signUpBoundary = signUpControl.getBoundary();
                signUpBoundary->createAccount(id, pw, phone);
                continue;
            }
            // 1.2 - Nonexistent input case
            case 2:
            {
                continue;
            }
            }
        }
        // 2
        case 2:
        {
            switch (menu_level_2)
            {
            // 2.1 : log in
            case 1:
            {
                out_fp << ". 로그인\n";
                string id, pw;
                in_fp >> id >> pw;
                Login loginControl(mCollection);
                LoginUI *loginBoundary = loginControl.getBoundary();
                loginBoundary->login(id, pw);
                continue;
            }

            // 2.2 : log out
            case 2:
            {
                out_fp << ". 로그아웃\n";
                LogOut logOutControl(mCollection);
                LogOutUI *logOutBoundary = logOutControl.getBoundary();
                logOutBoundary->logOut();
                continue;
            }
            }
        }

        // 3
        case 3:
        {
            switch (menu_level_2)
            {
            // 3.1 : register bicycle
            case 1:
            {
                out_fp << ". 자전거 등록\n";
                string id, maker;
                in_fp >> id >> maker;
                RegisterBicycle registerBicycleControl(bCollection);
                RegisterBicycleUI *registerBicycleBoundary = registerBicycleControl.getBoundary();
                registerBicycleBoundary->addBicycle(id, maker);
                continue;
            }
            default:
            {
                continue;
            }
            }
        }

        // 4
        case 4:
        {
            switch (menu_level_2)
            {
            // 4.1 : rent bicycle
            case 1:
            {
                out_fp << ". 자전거 대여\n";
                string id;
                in_fp >> id;
                RentBicycle rentBicycleControl(bCollection);
                RentBicycleUI *rentBicycleBoundary = rentBicycleControl.getBoundary();
                rentBicycleBoundary->rentBicycleByID(id);
                continue;
            }
            default:
                continue;
            }
        }

        case 5:
        {
            switch (menu_level_2)
            {
            // 5.1 : query bicycle list
            case 1:
            {
                out_fp << ". 자전거 대여 리스트\n";
                QueryBicycle queryBicycleControl(bCollection);
                QueryBicycleUI *queryBicycleBoundary = queryBicycleControl.getBoundary();
                queryBicycleBoundary->queryBicycleList();
                continue;
            }
            default:
                continue;
            }
        }

        // 6
        case 6:
        {
            switch (menu_level_2)
            {
            // 6.1 : exit program
            case 1:
            {
                out_fp << ". 종료\n";
                is_program_exit = 1;
                continue;
            }
            }
        }
        }
    }

    program_exit(bCollection, mCollection);
}

void program_exit(BicycleCollection *bCollection, MemberCollection *mCollection)
{
    delete bCollection;
    delete mCollection;
}