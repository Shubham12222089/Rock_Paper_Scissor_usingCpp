#include<iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int UserChoice(){
    int choice;
    cout<<"Enter your choice (1 for Rock, 2 for Paper, 3 for Scissor): ";
    cin>>choice;
    return choice;
}

int ComputerChoice(){
    return rand()%3 + 1;
}

void DetermineWinner(int userChoice,int computerChoice){
    cout<<"Computer Choose: ";
    switch(computerChoice){
        case 1:
            cout<<"Rock";
            break;
        case 2:
            cout<<"Paper";
            break;
        case 3:
            cout<<"Scissor";
            break;
    }
    cout<<endl;

    cout<<"You Choose: ";
    switch(userChoice){
        case 1:
            cout<<"Rock";
            break;
        case 2:
            cout<<"Paper";
            break;
        case 3:
            cout<<"Scissor";
            break;
    }
    cout<<endl;

    if (userChoice == computerChoice) {
        cout << "It's a Tie." << endl;
    } else if ((userChoice == 1 && computerChoice == 3) ||
           (userChoice == 2 && computerChoice == 1) ||
           (userChoice == 3 && computerChoice == 2)) {
        cout << "You Win" << endl;
    } else {
        cout << "Computer Wins" << endl;
    }

}

int main(){
    srand(time(0));

    int userChoice = UserChoice();
    int computerChoice = ComputerChoice();

    DetermineWinner(userChoice,computerChoice);

    return 0;
}