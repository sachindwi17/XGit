#include <iostream>
#include<sys/stat.h>
#include<fstream>

#define x_git_dir "./.git"

bool x_git_dir_init = false;

/**
 * @brief ".git" is alrady exists in the current directory
 * @return bool
 */
bool isDirExists(const char*);

// Methods for initialize .git directory in current directory
bool x_git_init();

// file creator method
void makeFile(string);
void makeFile(string, string);

#include "../lib/x_git_init.lib"
