#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>

// Utility CONSTANTS.
const char* X_GIT_USERNAME_ENV_VAR = "x_git_username";
char* CURRENT_LOGIN_USER_NAME;

const char* X_GIT_LOGIN_USER_TOKEN = "x_git_token";
char* CURRENT_LOGIN_USER_TOKEN;

// Utility method declarations.
void github_login();

// Custom library.
#include "../lib/login.lib"
