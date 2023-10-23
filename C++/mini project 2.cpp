#include <iostream>
#include <vector>
using namespace std;

class Cricketer {
protected:
    vector<int> runs;

public:
    void addRuns(int run) {
        runs.push_back(run);
    }

    int getTotalRuns() {
        int total = 0;
        for (int run:runs) {
            total += run;
        }
        return total;
    }
};

class Batsman : public Cricketer {
private:
    int bestPerformance;
    int bestScore;

public:
    void setBestPerformance(int performance) {
        bestPerformance = performance;
    }

    void setBestScore(int score) {
        bestScore = score;
    }

    int getBestPerformance() {
        return bestPerformance;
    }

    int getBestScore() {
        return bestScore;
    }
};

int main() {
    Batsman batsman;
    
    batsman.addRuns(50);
    batsman.addRuns(30);
    batsman.addRuns(100);
    
    batsman.setBestPerformance(5);
    batsman.setBestScore(200);
    
    int totalRuns = batsman.getTotalRuns();
    int bestScore = batsman.getBestScore();
    int bestPerformance = batsman.getBestPerformance();
    
    cout << "Total Runs: " << totalRuns << endl;
    cout << "Best Score: " << bestScore << endl;
    cout << "Best Performance: " << bestPerformance << endl;
    
    return 0;
}
