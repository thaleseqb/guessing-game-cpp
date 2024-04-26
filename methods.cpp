using namespace std;
#include <iostream>
#include <random>
#include <time.h>
#include <map>
#include <algorithm>
#include "header_methods.h"

void greaterOrLower(int attempt, int attempts_number, int aux_count, bool condition) {
    cout << "Your attempt was wrong, but don't resign yet, try again !" << endl;
    cout << "******************************************" << endl;
    
    if (condition) {
        cout << attempt << " is greater than the secret number" << endl;
    } else {
        cout << attempt << " is lower than the secret number" << endl;
    }

    int diff = attempts_number - aux_count;
    cout << "Only " << diff << " attempts remains" << endl;
}

void selectLevelMode(GETINFO *map) {
    
    cin >> map->level_mode;
}

void defineDifficulty(GETINFO *map, string level_mode) {
    switch (map->level_definer[level_mode]) {
        case 2:
        map->attempts_number = 10;
        break;
        
        case 3:
        map->attempts_number = 5;
        break;
    
    default:
        map->attempts_number = 15;
        break;
    }
}

void printHeader() {
    cout << "********************************" << endl;
    cout << "* Welcome to the guessing game *" << endl;
    cout << "********************************" << endl;
}

void difficultyHeader() {
    cout << "Choose a difficulty level\n\n" << endl;
    cout << "The game offers 3 difficulty levels:\n" << endl;
    cout << "* Ease, Medium and Hard, choose one ! *" << endl;
}

int generateRandomNumber() {
    int seeder = time(0);
    srand(seeder);
    int secret_number = rand();
    secret_number = secret_number % 100 + 1;

    return secret_number;
}

void printInit() {
    cout << "******************************************" << endl;
    cout << "Now you can write your attmept in terminal" << endl;
    cout << "******************************************" << endl;
}

void chooseNumber(GETINFO *map) {
    cout << "******************************************" << endl;
    cout << "Choose a number for your attempt" << endl;
    cin >> map->attempt;
    cout << "******************************************" << endl;
    cout << "The value of your attempt is: " << map->attempt << endl;
}
