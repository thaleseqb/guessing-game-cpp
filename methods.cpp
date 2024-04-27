#include <iostream>
#include <random>
#include <time.h>
#include <map>
#include <algorithm>
#include "header_methods.h"

void greaterOrLower(int attempt, int attempts_number, int aux_count, bool condition) {
    
    std::cout << "Your attempt was wrong, but don't resign yet, try again !" << std::endl;
    std::cout << "******************************************" << std::endl;
    
    if (condition) {
        std::cout << attempt << " is greater than the secret number" << std::endl;
    } else {
        std::cout << attempt << " is lower than the secret number" << std::endl;
    }

    int diff = attempts_number - aux_count;
    std::cout << "Only " << diff << " attempts remains" << std::endl;
}

void selectLevelMode(GETINFO *map) {
    
    std::cin >> map->level_mode;
}

void defineDifficulty(GETINFO *map, std::string level_mode) {
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
    std::cout << "********************************" << std::endl;
    std::cout << "* Welcome to the guessing game *" << std::endl;
    std::cout << "********************************" << std::endl;
}

void difficultyHeader() {
    std::cout << "Choose a difficulty level\n\n" << std::endl;
    std::cout << "The game offers 3 difficulty levels:\n" << std::endl;
    std::cout << "* Easy, Medium and Hard, choose one ! *" << std::endl;
}

int generateRandomNumber() {
    int seeder = time(0);
    srand(seeder);
    int secret_number = rand();
    secret_number = secret_number % 100 + 1;

    return secret_number;
}

void printInit() {
    std::cout << "******************************************" << std::endl;
    std::cout << "Now you can write your attmept in terminal" << std::endl;
    std::cout << "******************************************" << std::endl;
}

void chooseNumber(GETINFO *map) {
    std::cout << "******************************************" << std::endl;
    std::cout << "Choose a number for your attempt" << std::endl;
    std::cin >> map->attempt;
    std::cout << "******************************************" << std::endl;
    std::cout << "The value of your attempt is: " << map->attempt << std::endl;
}
