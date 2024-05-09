#include <iostream>
#include <string>
#include <vector>

struct Scores {
    std::string name;
    int score;
};

void AddUserScore(std::vector<Scores>& user_scores) {
    std::string name;
    int score;
    std::cout << "Please enter the player's name: " << std::endl;
    std::cin >> name;
    std::cout << "Please enter the player's score: " << std::endl;
    std::cin >> score;

    user_scores.push_back({name, score});
    std::cout << "High score added successfully." << std::endl;
    std::cout << '\n';
}

void DisplayHighestScores(const std::vector<Scores>& user_scores) {
    std::cout << "Highest score for each user: " << std::endl;

    // traverse the vector and find the highest score
    std::vector<Scores> unique_scores;
    for (const auto& user_score : user_scores) {
        bool found = false;
        for (auto& unique_score : unique_scores) {
            if (unique_score.name == user_score.name) {
                if (unique_score.score < user_score.score) {
                    unique_score.score = user_score.score;
                }
                found = true;
                break;
            }
        }
        if (!found) {
            unique_scores.push_back(user_score);
        }
    }
    // display the highest scores
    for (const auto& user_score : unique_scores) {
        std::cout << user_score.name << ": " << user_score.score << std::endl;
    }
}

void DisplayOneUserScores(const std::vector<Scores>& user_scores) {
    std::string name;
    std::cout << "Enter the player's name: ";
    std::cin >> name;

    std::cout << "All scores for " << name << ":" << std::endl;
    for (const auto& user_score : user_scores) {
        if (user_score.name == name) {
            std::cout << user_score.score << std::endl;
            std::cout << '\n';
        }
    }
}

void DisplayAllUsersScores(const std::vector<Scores>& user_scores) {
    std::cout << "All scores from all user: " << std::endl;
    for (const auto& user_score : user_scores) {
        std::cout << user_score.name << ": " << user_score.score << std::endl;
    }
}

void DisplayUserList(const std::vector<Scores>& user_scores) {
    std::cout << "List of users: " << std::endl;
    std::vector<std::string> users;
    for (const auto& user_score : user_scores) {
        bool found = false;
        for (const auto& user : users) {
            if (user == user_score.name) {
                found = true;
                break;
            }
        }
        if (!found) {
            users.push_back(user_score.name);
        }
    }
    for (const auto& user : users) {
        std::cout << user << std::endl;
    }
}

void UserMenuTracking(int choice, std::vector<Scores>& user_scores) {
    switch (choice) {
        case 1:
            AddUserScore(user_scores);
            break;
        case 2:
            DisplayHighestScores(user_scores);
            break;
        case 3:
            DisplayOneUserScores(user_scores);
            break;
        case 4:
            DisplayAllUsersScores(user_scores);
            break;
        case 5:
            DisplayUserList(user_scores);
            break;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
            break;
    }
}

int main() {
    std::vector<Scores> user_scores;
    int choice;
    while (true) {
        std::cout << "\nGame High Scores Menu:" << std::endl;
        std::cout << "1. Add new high score" << std::endl;
        std::cout << "2. Display highest scores for each user" << std::endl;
        std::cout << "3. Display all scores for a particular user" << std::endl;
        std::cout << "4. Display all scores from all users" << std::endl;
        std::cout << "5. Display list of users" << std::endl;
        std::cout << "6. Exit" << std::endl;

        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 6) {
            std::cout << "Exiting program..." << std::endl;
            return 0;
        }

        UserMenuTracking(choice, user_scores);
    }

    return 0;
}