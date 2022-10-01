#ifdef _WIN32
    #include<windows.h>
#else
    // include those file need to rether then windown.
#endif

#include <iostream>
using namespace std;

// Custom header.
#include "src/headers/utils.h"
#include "src/headers/inits.h"
#include "src/headers/x_git_init.h"
#include "src/headers/stage.h"
#include "src/headers/status.h"
#include "src/headers/commit.h"
#include "src/headers/log.h"
#include "src/headers/push.h"
#include "src/headers/pull.h"
#include "src/headers/branch.h"
#include "src/headers/see_branch.h"
#include "src/headers/checkout.h"
#include "src/headers/github_login.h"

/**========================================================================
 * *                                Main Program
 *  All methods and functionality are in one place in this file. Some users 
 *  are familiar with CLI and some are not, so we also care about these types 
 *  of users also use our tool without any inconvenience.
 *  version: 1.0.0
 *========================================================================**/

int main(int argc, char* argv[]) {
    try {
        // logic for, decide CLI usage or basic usage.
        CLI_USAGE = argc == 1;
        if(!CLI_USAGE) {
        // Event-Driven approach for CLI-based application.

        }else {
        // Non-CLI usage or simple usage
            while(true) {
                if(!firstTimeSetupDone()) {
                    string temp;
                    cout<<"We did't find any configuration, plese register yourself! Enter Y/n: ";
                    getline(cin, temp);
                    if(temp == "Y" || temp.empty()) {
                        string name, email;
                        fflush(stdin);
                        cout<<"Enter your full name[unknown]: ";getline(cin, name);
                        fflush(stdin);
                        cout<<"Enter your email[unknown]: ";getline(cin, email);
                        setAuthorName(name);
                        setAuthorEmail(email);
                    }else if(temp == "n") {
                        cout<<"Seted Author name and email [unknown].";
                        setAuthorName(AUTHOR_NAME);
                        setAuthorEmail(AUTHOR_EMAIL);
                    }else {
                        cout<<"Without configuration you not forwared! Exited.";
                        break;
                    }
                }else {
                    int choice;
                    if(!isDirExists(x_git_dir) && !x_git_dir_init) {
                        cout<<"1. Initialize a XGit repository.\n2. GitHub\n3. Exit"<<endl;
                        printColoredText("Choose one of the option: ", MAGENTA);
                        cin>>choice;
                        if(!cin.fail() && (choice >= 1 && choice <= 3)) {
                            switch(choice) {
                                case 1:
                                    if(x_git_init()) {
                                        printColoredText("-> XGit repository initialized successfully.\n", GREEN);
                                    }else {
                                        printColoredText("-> XGit repository already initialized.\n", RED);
                                    }
                                    break;
                                case 2:
                                    githubLogin();
                                    break;
                                case 3:
                                    printColoredText("Bye :)\n", YELLOW);
                                    exit(0);
                                default:
                                    cout<<"Please choose an valid option!"<<choice<<endl;
                            }
                        }else {
                            printColoredText("Detect unusual activity! Exited.\n", RED);
                            break;
                        }
                    }else {
                        cout<<"\n1. Staged changes\n2. See status of files\n3. Commit staged files\n4. See commits log\n5. Push changes\n6. Pull changes\n7. Create Branch\n8. See Branch\n9. Switch Branch\n10. GitHub\n11. Clearn Screen\n12. Exit"<<endl;
                        printColoredText("Choose one of the option: ", MAGENTA);
                        cin>>choice;
                        if(!cin.fail() && (choice >= 1 && choice <= 12)) {
                            switch(choice) {
                                case 1:
                                    stage();
                                    printColoredText("-> Staging successfully.\n", GREEN);
                                    break;
                                case 2:
                                    status();
                                    break;
                                case 3:
                                    commit();
                                    printColoredText("-> Commited new changes successfully.\n", GREEN);
                                    break;
                                case 4:
                                    log();
                                    break;
                                case 5:
                                    push();
                                    break;
                                case 6:
                                    pull();
                                    break;
                                case 7:
                                    branch();
                                    printColoredText("-> Branch created successfully.\n", GREEN);
                                    break;
                                case 8:
                                    printColoredText("-> Branches:\n", BLUE);
                                    see_branch();
                                    break;
                                case 9:
                                    checkout();
                                    printColoredText("-> Switched to new branch successfully.\n", GREEN);
                                    break;
                                case 10:
                                    githubLogin();
                                    break;
                                case 11:
                                    clearScreen();
                                    printColoredText("-> Clearned Screen.\n", GREEN);
                                    break;
                                case 12:
                                    printColoredText("Bye :)\n", YELLOW);
                                    exit(0);
                                default:
                                    cout<<"Please choose an valid option!"<<choice<<endl;
                            }
                        }else {
                            printColoredText("Detect unusual activity! Exited.\n", RED);
                            break;
                        }
                    }
                }
            }
        }
    }catch(exception& e) {
        printColoredText("Error: " + string(e.what()), RED);
    }
    return 0;
}
