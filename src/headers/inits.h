#include <iostream>

/**==============================================
 * *                   INIT
 *   This file contains all the initial codebase 
 *   need to initialize a user or check the state 
 *   like:
 *      - Author Info
 *=============================================**/

// User-specific constants.
bool CLI_USAGE = NULL;
bool FIRST_TIME_SETUP_DONE = false;
string AUTHOR_NAME = "unknown";
string AUTHOR_EMAIL = "unknown";

// User-specific methods.

/**
 * @brief Set the Author Name, a method for the set the author name, getting from the user in the first time setup.
 * @param name, set value as name key.
 */
void setAuthorName(string);

/**
 * @brief Set the Author Email, a method for set author email, getting from the user in first-time setup.
 * @param email, set value as email key.
 */
void setAuthorEmail(string);

/**
 * @brief Get Author name.
 */
string getAuthorName();

/**
 * @brief Get Author email.
 */
string getAuthorEmail();

/**
 * @brief Run every time, to check whether the configuration is done or not.
 */
bool firstTimeSetup();

#include "../lib/inits.lib"
