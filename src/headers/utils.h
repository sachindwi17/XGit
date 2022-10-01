#include <cstring>
#include <fstream>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
using namespace std;

// colors defination
#define RED "red"
#define GREEN "green"
#define YELLOW "yellow"
#define BLUE "blue"
#define MAGENTA "magenta"
#define CYAN "cyan"
#define WHITE "white"

// Containe all the utility method, needed.

// Utils config file path.
#ifdef _WIN32
    #include <sysinfoapi.h>
    const char* UTILS_CONFIG_FILE = strcat(getenv("USERPROFILE"), "\\.xgitconfig");
    const int ESCAPE_SIZE = 1;
#else
    const char* UTILS_CONFIG_FILE = "/usr/bin/.xgitconfig";
    const int ESCAPE_SIZE = 1;
#endif

/**
 * @brief Set the enviroment variable, take key and value as pair.
 * @param key key for env vairable.
 * @param value value for env vairable value.
 * @return Not return anything.
 */
void setUtilData(string, string);

/**
 * @brief Get the enviroment variable value.
 * @param key key for retriving env variable value.
 * @return Return corosponding env variable value, else NULL.
 */
string getUtilData(string);

/**
 * @brief For delete UtilsConfig file.
 */
void deleteUtilConfig();

/**
 * @brief Clear screen cross-platform.
 */
void clearScreen();

/**
 * @file utils.h
 * @author Suryapratap Singh Suryavanshi (dev@suryapratap.ml)
 * @brief A method to print colored text on terminal.
 * @version 0.1
 * @date 2022-09-19
 * 
 * @copyright Copyright (c) 2022
 */
void printColoredText(string, string);

/**
 * @brief Get the All File Data object
 */
string getAllFileData(string);

#include "../lib/utils.lib"
