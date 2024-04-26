using namespace std;
#include <map>
#include <string>

struct info {
    int attempts_number;
    int aux_count = 1;
    bool isCorrect;
    int attempt;
    string level_mode;
    map<string, int> level_definer = {
        {"easy",1},
        {"medium",2},
        {"hard",3}
    };
};

typedef struct info GETINFO;

void greaterOrLower(int attempt, int attempts_number, int aux_count, bool condition);
void defineDifficulty(GETINFO *map, string level_mode);
void difficultyHeader();
void printHeader();
int generateRandomNumber();
void printInit();
void chooseNumber(GETINFO *map);
void selectLevelMode(GETINFO *map);