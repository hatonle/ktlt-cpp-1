//
// Created by Nguyen Duc Dung on 2019-02-15.
//
#include <string>
#ifndef A01_CORE_H
#define A01_CORE_H

/*TODO: If you are using some global variables and you intent to let other
 * users access it, you better declare it here.
 * Hint: use extern as shown in the below
 */
extern bool __coreInitialized;
extern int  __userChoice;
extern bool __isExiting;

extern int lengData;
extern std::string fileData;
extern std::string menu;
extern std::string welcome;
/**
 * Function: Initialization
 * Purpose:  Initialize anything necessary in your program before starting
 * Input:    None
 * Output:   None
 */
void Initialization();
/**
 * Function: Finalization
 * Purpose:  Clean up everything before the program exits
 * Input:    None
 * Output:   None
 */
void Finalization();

void LoadConfiguration();
void LoadWelcome();
void DisplayWelcome();

void LoadMenu();
void DisplayMenu();
void ProcessUserChoice();



#endif //A01_CORE_H
