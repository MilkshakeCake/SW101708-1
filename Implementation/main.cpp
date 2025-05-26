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
#include "ProgramExit.h"
#include "ProgramExitUI.h"

// DECLARE CONSTANTS
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// DECLARE FUNCTIONS
void doTask(BicycleCollection *bCollection, MemberCollection *mCollection);

// DECLARE VARIABLES
std::fstream out_fp;
std::fstream in_fp;

using namespace std;

int main()
{
    // Initialize file streams for input and output operations
    in_fp.open(INPUT_FILE_NAME);
    out_fp.open(OUTPUT_FILE_NAME);

    // Create collections to manage bicycles and members
    BicycleCollection *bCollection = new BicycleCollection();
    MemberCollection *mCollection = new MemberCollection();

    doTask(bCollection, mCollection);

    // Close file streams before program termination
    out_fp.close();
    in_fp.close();

    return 0;
}

void doTask(BicycleCollection *bCollection, MemberCollection *mCollection)
{
    // Variable to determine when to exit the program
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    while (!is_program_exit)
    {
        // Parse two integers from input file to determine menu selection
        in_fp >> menu_level_1 >> menu_level_2;

        // Output the selected menu levels to output file
        out_fp << menu_level_1 << '.' << menu_level_2;

        // Route logic based on top-level menu selection
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
            }
        }
        // 2 : Log in / Log out
        case 2:
        {
            switch (menu_level_2)
            {
            // 2.1 : Log in
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

            // 2.2 : Log out
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
            // 3.1 : Register Bicycle
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
            }
        }

        // 4
        case 4:
        {
            switch (menu_level_2)
            {
            // 4.1 : Rent Bicycle
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
            }
        }

        // 5
        case 5:
        {
            switch (menu_level_2)
            {
            // 5.1 : Query Rented Bicycle List
            case 1:
            {
                out_fp << ". 자전거 대여 리스트\n";
                QueryBicycle queryBicycleControl(bCollection);
                QueryBicycleUI *queryBicycleBoundary = queryBicycleControl.getBoundary();
                queryBicycleBoundary->queryBicycleList();
                continue;
            }
            }
        }

        // 6 : Exit program
        case 6:
        {
            switch (menu_level_2)
            {
            // 6.1 : exit program
            case 1:
            {
                out_fp << ". 종료";
                is_program_exit = 1;
                ProgramExit programExitControl;
                ProgramExitUI *programExitBoundary = programExitControl.getBoundary();
                programExitBoundary->shutDown(bCollection, mCollection);
                break;
            }
            }
        }
        }
    }
}