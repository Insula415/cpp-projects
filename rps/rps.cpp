#include <iostream>
#include <cmath>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>
#include <ctime> 

using namespace std;

int main() {

    srand (time(NULL));

    int computer = rand() % 3 + 1;
    int user = 0;
    bool running = true;

    string rock = "Rock\n";
    string paper = "Paper\n";
    string sci = "Scissors\n";
    

    cout << "====================\n";
    cout << "Rock paper scissors!\n";
    cout << "====================\n";

    cout << "\nEnter 111 to leave" << endl;
    while(running == true){
        cout << "1. Rock\n2. Paper\n3. Scissors\n";
        cout << "Choose: ";
        cin >> user;  

        if(user == 111){
            cout << "Thanks for using my program!";
            bool running = false;
            break;
        } else {
            cout << "\nYou chose: ";
                switch(user){
                case 1 :
                    cout << rock;
                    break;
                case 2 :
                    cout << paper;
                    break;
                case 3 :
                    cout << sci;
                    break;
                default :
                    cout << "Invalid Option\n";
            }
            
            cout << "Computer chose: ";
                switch(computer){
                case 1 :
                    cout << rock;
                    break;
                case 2 :
                    cout << paper;
                    break;
                case 3 :
                    cout << sci;
                    break;
                default :
                    cout << "Invalid Option\n";
            }

            if(user == computer){
                cout << "It's a draw!";
            }
            else if(user == 1 && computer == 3){
                cout << "You win!";
            }
            else if(user == 3 && computer == 2){
                cout << "You win!";
            }
            else if(user == 2 && computer == 1){
                cout << "You win!";
            }
            else {
                cout << "Computer wins!";
            }
            cout << " " << endl;
            cout << " " << endl;
            }
        }
    }