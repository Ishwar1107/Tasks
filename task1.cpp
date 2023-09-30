#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
 
int main()
{
 	cout<<"\n\t\t\t\t\t\tWelcome to Number Gussing Game!"<< endl;
    cout<<"\nYou have to guess a number between 1 to 100. You'll have limited choices based on the level you choose. Good Luck!"<<endl;
 
    while(true) {
        cout<<"\nEnter the difficulty level : ";
        cout<<"\n1.Easy \n2.Medium \n3.Difficult \n4.Exit"<<endl;
 
        //select the level of difficulty
        int difficultyChoice;
        cout<<"Enter the number : ";
        cin>>difficultyChoice;
 
        //generating the random number
        srand(time(0));
        int randomNumber = 1 + (rand() % 100);
        int playerChoice;
 
        //Difficulty Level:Easy
        if (difficultyChoice == 1) {
            cout<<"\nYou have 10 choices for finding the random number between 1 and 100.";
            int choicesLeft = 10;
            for (int i = 1; i <= 10; i++) {
 				//prompting the player to guess the random number
                cout<<"\nEnter the number : ";
                cin>>playerChoice;
 
                //determining if the playerChoice matches the random number
                if (playerChoice == randomNumber) {
                    cout<<"Well played! You won, "<<playerChoice<<" is the random number"<<endl;
                    cout<<"\n\t\t\t\t Thanks for playing...."<<endl;
                    cout<<"\nPlay the game again with us!!\n\n"<<endl;
                    break;
                }
                else {
                    cout <<playerChoice<<" is not the right number\n";
                    if (playerChoice > randomNumber) {
                        cout<<"The random number is smaller than the number you have chosen"<<endl;
                    }
                    else {
                        cout<<"The random number is greater than the number you have chosen"<<endl;
                    }
                    choicesLeft--;
                    cout<<choicesLeft<<" choices left."<< endl;
                    if (choicesLeft == 0) {
                        cout<<"You couldn't find the random number, it was "<<randomNumber<<", You lose!!\n\n";
                        cout<<"\nPlay the game again to win!!!\n\n";
                    }
                }
            }
        }
 		// Difficulty level : Medium
        else if (difficultyChoice == 2) {
            cout << "\nYou have 7 choices for finding the random number between 1 and 100.";
            int choicesLeft=7;
            for (int i = 1; i <= 7; i++) {
 				// prompting the player to guess the random number
                cout<<"\nEnter the number : ";
                cin>>playerChoice;
 
                // determining if the playerChoice matches the random number
                if (playerChoice == randomNumber) {
                    cout<<"Well played! You won, "<<playerChoice<<" is the random number"<<endl;
                    cout<<"\n\t\t\t\t Thanks for playing...."<<endl;
                    cout<<"\nPlay the game again with us!!\n\n"<<endl;
                    break;
                }
                else {
                    cout<<playerChoice<<" is not the right number\n";
                    if (playerChoice > randomNumber) {
                        cout<<"The random number is smaller than the number you have chosen"<<endl;
                    }
                    else {
                        cout<<"The random number is greater than the number you have chosen"<<endl;
                    }
                    choicesLeft--;
                    cout<<choicesLeft<<" choices left."<<endl;
                    if (choicesLeft == 0) {
                        cout<<"You couldn't find the random number, it was "<<randomNumber<<", You lose!!\n\n";
                        cout<<"\nPlay the game again to win!!!\n\n";
                    }
                }
            }
        }
        // Difficulty level : Difficult
        else if (difficultyChoice == 3) {
            cout <<"\nYou have 5 choices for finding the random number between 1 and 100.";
            int choicesLeft = 5;
            for (int i = 1; i <= 5; i++) {
 				// prompting the player to guess the random number
                cout<<"\nEnter the number : ";
                cin>>playerChoice;
 
                // determining if the playerChoice matches the random number
                if (playerChoice == randomNumber) {
                    cout<<"Well played! You won, "<<playerChoice<<" is the random number"<<endl;
                    cout<<"\n\t\t\t\tThanks for playing...."<<endl;
                    cout<<"\nPlay the game again with us!!\n\n"<<endl;
                    break;
                }
                else {
                    cout<<playerChoice<<" is not the right number\n";
                    if (playerChoice>randomNumber) {
                        cout<<"The random number is smaller than the number you have chosen"<<endl;
                    }
                    else {
                        cout<<"The random number is greater than the number you have chosen"<<endl;
                    }
                    choicesLeft--;
                    cout<<choicesLeft<<" choices left. "<<endl;
                    if (choicesLeft == 0) {
                        cout<<"You couldn't find the random number, it was "<<randomNumber<<", You lose!!\n\n";
                        cout<<"\nPlay the game again to win!!!\n\n";
                    }
                }
            }
        }
        // To end the game
        else if (difficultyChoice == 4) {
            exit(0);
        }
        else {
            cout<<"Wrong choice, Enter valid choice to play the game! (0,1,2,3)"<<endl;
        }
    }
    return 0;
}
