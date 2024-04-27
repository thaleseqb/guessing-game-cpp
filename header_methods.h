#include <map>
#include <string>

struct info {
    int attempts_number;
    int aux_count = 1;
    bool isCorrect;
    int attempt;
    std::string level_mode;
    std::map<std::string, int> level_definer = {
        {"easy",1},
        {"medium",2},
        {"hard",3}
    };
};

typedef struct info GETINFO;

void greaterOrLower(int attempt, int attempts_number, int aux_count, bool condition);
void defineDifficulty(GETINFO *map, std::string level_mode);
void difficultyHeader();
void printHeader();
int generateRandomNumber();
void printInit();
void chooseNumber(GETINFO *map);
void selectLevelMode(GETINFO *map);