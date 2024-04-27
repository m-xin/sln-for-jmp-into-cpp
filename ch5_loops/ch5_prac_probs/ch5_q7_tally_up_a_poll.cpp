#include <iostream>
#include <string>

int main() {
    // get the poll question
    std::string poll_question;
    std::cout << "Enter the poll questions: ";
    std::getline(std::cin, poll_question);

    // get the three answers:
    std::string answer1;
    std::cout << "The first answer is: \n";
    std::cin >> answer1;
    std::string answer2;
    std::cout << "The second answer is: \n";
    std::cin >> answer2;
    std::string answer3;
    std::cout << "The third answer is: \n";
    std::cin >> answer3;

    // tolly vote

    std::string vote;

    int answer1_cnt = 0;
    int answer2_cnt = 0;
    int answer3_cnt = 0;

    std::cout << "Please vote for the answers: " << std::endl;

    while (std::cin >> vote && vote != "0") {
        if (vote == answer1) {
            answer1_cnt++;
        } else if (vote == answer2) {
            answer2_cnt++;
        } else if (vote == answer3) {
            answer3_cnt++;
        } else {
            std::cout << "Invalid vote, try again." << std::endl;
        }
    }

    std::cout << "The vote to answer 1 is: " << std::string(answer1_cnt, '#') << " [" << answer1_cnt << "]" << '\n';
    std::cout << "The vote to answer 2 is: " << std::string(answer2_cnt, '#') << " [" << answer2_cnt << "]" << '\n';
    std::cout << "The vote to answer 3 is: " << std::string(answer3_cnt, '#') << " [" << answer3_cnt << "]" << '\n';

    return 0;
}
