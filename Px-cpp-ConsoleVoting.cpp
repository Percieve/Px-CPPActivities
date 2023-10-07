#include <iostream>

int main()
{
    // declare and initialize variables
    char vote, operation;
    int totalVotes;
    int alphaVotes = 0;
    int betaVotes = 0;
    int cookieVotes = 0;
    bool quitVoting = false;
    // we use while loop to iterate the code inside, while quitVoting bool variable is equal to false, meaning we will
    //    only stop the code if the user enters a certain key; 'Q' to quit.
    while (quitVoting == false)
    {
        std::cout << "   PRESIDENTIAL ELECTIONS   " << std::endl;
        std::cout << "         Candidates:        " << std::endl;
        std::cout << "        A. ALPHA            " << std::endl;
        std::cout << "        B. BETA             " << std::endl;
        std::cout << "        C. COOKIE           " << std::endl;
        std::cout << "\n";
        std::cout << "Enter 'V'- vote, 'R'- show result and 'Q'- quit: ";
        std::cin >> operation;
        // switch was used to track the key user inputs easily and more conveniently. 
        switch (operation)
        {
            case 'V':
                std::cout << "Enter your vote: ";
                std::cin >> vote;
                // we use the increment ++ to increase the value of the variable for each votes
                if (vote == 'A' || vote == 'a')
                {
                    alphaVotes++;
                }
                else if (vote == 'B' || vote == 'b')
                {
                    betaVotes++;
                }
                else if (vote == 'C' || vote == 'c')
                {
                    cookieVotes++;
                }
                totalVotes = alphaVotes + betaVotes + cookieVotes;
                break;
            case 'R':
                std::cout << "   PRESIDENTIAL ELECTIONS     " << std::endl;
                std::cout << "\n";
                std::cout << "Candidates:           Results:  " << std::endl;
                std::cout << "A. Alpha           " << alphaVotes << std::endl;
                std::cout << "B. Beta             " << betaVotes << std::endl;
                std::cout << "C. Cookie            " << cookieVotes << std::endl;
                std::cout << "   Total Votes: " << totalVotes << std::endl;

                if (alphaVotes > betaVotes && alphaVotes > cookieVotes)
                {
                    std::cout << "   The winner is: ALPHA" << std::endl;
                }
                else if (betaVotes > alphaVotes && betaVotes > cookieVotes)
                {
                    std::cout << "   The winner is: BETA" << std::endl;
                }
                else if (cookieVotes > alphaVotes && cookieVotes > betaVotes)
                {
                    std::cout << "   The winner is: COOKIE" << std::endl;
                }
                break;
            case 'Q':
                quitVoting = true;
                break;
            default:
                break;
        }
    }
    return 0;
}
