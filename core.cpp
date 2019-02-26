//
// Created by Nguyen Duc Dung on 2019-02-15.
//
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <iomanip>
#include <sstream>
#include <string>
#include <fstream>
/// Prototype declaration
void Initialization();
void Finalization();

void LoadConfiguration();
void LoadWelcome();
void DisplayWelcome();
void LoadMenu();
void DisplayMenu();
void ProcessUserChoice();
///--------------------------------------------------------------------

bool __coreInitialized = false;  /// an example of global variable
int  __userChoice;               /// a global variable to store user choice
bool __isExiting = false;        /// this variable should be turn on when the program exits
int lengData;

std::string fileData;
std::string menu;
std::string welcome;


// TODO: add more global variables to complete tasks

///--------------------------------------------------------------------
/**
 * Function: Initialization
 * Purpose:  Initialize anything necessary in your program before starting
 * Input:    None
 * Output:   None
 */
void Initialization() {
    LoadConfiguration();

    LoadWelcome();
    DisplayWelcome();

    LoadMenu();
    // TODO: write the code to initialize the program
    __coreInitialized = true;
}

/**
 * Function: Finalization
 * Purpose:  Clean up everything before the program exits
 * Input:    None
 * Output:   None
 */
void Finalization() {
    // TODO: write the code to clean up when the program exits
}

void LoadConfiguration() {
    // TODO: write code to load data from the configuration file
    // std::ofstream afile("./conf.json", ios::in);
    // std::string str;

    // std::stringstream ss;
    // ss >> afile.rdbuf();
    // str = ss.str();
    // fileData = str.data();
    // afile.close();

    // lengData = fileData.length();

    // for(int i = 0; i < lengData; i++){
    //     if(fileData[i] == '\"') fileData[i] = '\0';
    // }
    return;
}
void LoadWelcome(){
    // int begin = 0;
    // int end = 0;
    // int lineNumber = 1;
    // for(int i = 0; i < lengData; i++){
    //     if(fileData[i] == '\n') {
    //         lineNumber++;
    //         if(lineNumber == 8) begin = i;
    //         if(lineNumber == 17) end = i;
    //     }
    // }
    // for(int i = begin+1; i < end; i++){
    //     welcome += fileData[i];
    // }
    // return;
}
void DisplayWelcome(){
  //  cout << welcome << "\n";
    return;
}

void LoadMenu() {
    // TODO: write code to load menu from the configuration file
    // int begin = 0;
    // int end = 0;
    // int lineNumber = 1;
    // for(int i = 0; i < lengData; i++){
    //     if(fileData[i] == '\n') {
    //         lineNumber++;
    //         if(lineNumber == 19) begin = i;
    //         if(lineNumber == 24) end = i;
    //     }
    // }
    // for(int i = begin+1; i < end; i++){
    //         menu += fileData[i];
    //     }
    // int menuLen = menu.length();

    // for(int i = 0; i < menuLen; i++){
    //     if(menu[i] == 'o' && menu[i+1] == 'p' && menu[i+2] == 't'){
    //         menu[i] = '\0';
    //         menu[i+1] = '\0';
    //         menu[i+2] = '\0';
    //     }
    // }
    return;
}

void DisplayMenu() {
    // TODO: Display the menu loaded from configuration file
    //cout << menu << "\n";
    return;
}

void ProcessUserChoice() {
    // TODO: Read user input and process
}