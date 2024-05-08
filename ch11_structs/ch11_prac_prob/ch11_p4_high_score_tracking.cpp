/* #include <algorithm>
#include <iostream>
#include <string>
#include <vector>

struct HighScore {
    std::string name;
    int score;
};

void AddingScore(std::vector<HighScore>& scores) {
    std::string name;
    int score;
    std::cout << "Enter player's name: ";
    std::cin >> name;
    std::cout << "Eneter score: ";
    std::cin >> score;

    scores.push_back({name, score});
    std::cout << "High score added successfully." << std::endl;
}

void DisplayHighestScore(const std::vector<HighScore>& scores) {
    std::cout << "Highest scores for each user: " << std::endl;

    // find the highest score for each user:
    std::vector<HighScore> uniqueScores;
    for (const auto& score : scores) {
        bool found = false;
        for (auto& uniqueScore : uniqueScores) {
            if (uniqueScore.name == score.name) {
                if (uniqueScore.score < score.score) {
                    uniqueScore.score = score.score;
                }
                found = true;
                break;
            }
        }
        if (!found) {
            uniqueScores.push_back(score);
        }
    }
    // display the highest scores
    for (const auto& user : users) {
        std::cout << uesr << std::endl;
    }
} */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Structure to store a user's high score
struct HighScore {
    string name;
    int score;
};

// Function to add a new high score
void addHighScore(vector<HighScore>& scores) {
    string name;
    int score;

    cout << "Enter player name: ";
    cin >> name;

    cout << "Enter score: ";
    cin >> score;

    scores.push_back({name, score});
    cout << "High score added successfully." << endl;
}

// Function to display the highest score for each user
void displayHighestScores(const vector<HighScore>& scores) {
    cout << "Highest scores for each user:" << endl;

    // Find the highest score for each user
    vector<HighScore> uniqueScores;
    for (const auto& score : scores) {
        bool found = false;
        for (auto& uniqueScore : uniqueScores) {
            if (uniqueScore.name == score.name) {
                if (uniqueScore.score < score.score) {
                    uniqueScore.score = score.score;
                }
                found = true;
                break;
            }
        }
        if (!found) {
            uniqueScores.push_back(score);
        }
    }

    // Display the highest scores
    for (const auto& score : uniqueScores) {
        cout << score.name << ": " << score.score << endl;
    }
}

// Function to display all scores for a particular user
void displayScoresForUser(const vector<HighScore>& scores) {
    string name;
    cout << "Enter player name: ";
    cin >> name;

    cout << "All scores for " << name << ":" << endl;
    for (const auto& score : scores) {
        if (score.name == name) {
            cout << score.score << endl;
        }
    }
}

// Function to display all scores from all users
void displayAllScores(const vector<HighScore>& scores) {
    cout << "All scores from all users:" << endl;
    for (const auto& score : scores) {
        cout << score.name << ": " << score.score << endl;
    }
}

// Function to display the list of users
void displayUserList(const vector<HighScore>& scores) {
    cout << "List of users:" << endl;
    vector<string> users;
    for (const auto& score : scores) {
        bool found = false;
        for (const auto& user : users) {
            if (user == score.name) {
                found = true;
                break;
            }
        }
        if (!found) {
            users.push_back(score.name);
        }
    }
    for (const auto& user : users) {
        cout << user << endl;
    }
}

int main() {
    vector<HighScore> scores;

    int choice;
    while (true) {
        cout << "\nGame High Scores Menu:" << endl;
        cout << "1. Add new high score" << endl;
        cout << "2. Display highest scores for each user" << endl;
        cout << "3. Display all scores for a particular user" << endl;
        cout << "4. Display all scores from all users" << endl;
        cout << "5. Display list of users" << endl;
        cout << "6. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addHighScore(scores);
                break;
            case 2:
                displayHighestScores(scores);
                break;
            case 3:
                displayScoresForUser(scores);
                break;
            case 4:
                displayAllScores(scores);
                break;
            case 5:
                displayUserList(scores);
                break;
            case 6:
                cout << "Exiting program..." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    }
}
