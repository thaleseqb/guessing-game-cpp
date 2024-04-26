using namespace std;
#include <iostream>
#include <algorithm>
#include "header_methods.h"

GETINFO information;

int main() {

    printHeader();
    int secret_number = generateRandomNumber();
    difficultyHeader();

    selectLevelMode(&information);
    
    transform(information.level_mode.begin(), information.level_mode.end(), 
            information.level_mode.begin(), [](char ch){
            return tolower(ch);
    });

    defineDifficulty(&information, information.level_mode);

    bool isEqual = information.attempts_number == information.aux_count;

    while (!information.isCorrect && !isEqual) {
    
        chooseNumber(&information);

        if (information.attempt == secret_number) {
            cout << "You win the guiessing game, congratulations!" << endl;
            information.isCorrect = true;
        } else if (information.attempt > secret_number) {
            greaterOrLower(information.attempt, information.attempts_number, information.aux_count, true);
        } else {
            greaterOrLower(information.attempt, information.attempts_number, information.aux_count, false);
        }
        information.aux_count++;
    }
    return 0;
}