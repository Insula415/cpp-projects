#include <iostream>
#include <string.h>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <ctime> 
#include <cctype>

using namespace std;

const char characters[] = "0123456789!@#$%^&*abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int length = sizeof(characters)-1;

void generatePW() {
    int n;
    cout << "Enter length: ";
    cin >> n;

    srand(time(0));
    cout << "Generated password: ";
    for(int i=0; i < n; i++)
    cout << characters[rand() % length];
    cout << " " << endl;
    cout << " " << endl;
}

void testPW() {
    string pwEntered;
    bool hasChars;
    bool hasCaps;
    bool hasNums;
    int score = 0;

    cout << "Enter password: ";
    cin >> pwEntered;

    int n = pwEntered.length();

    cout << " " << endl;
    // HAS CHARACTERS
    if (n >= 10){
        bool hasChars = true;
        cout << "Has 10+ characters: true +10" << endl;
        score += 10;
    } else {
        bool hasChars = false;
        cout << "Has 10+ characters: false -10" << endl;
        score -= 10;
    }

    
    //converting input
    char a[n + 1];
    strcpy(a, pwEntered.c_str());
    bool numbers = false;

    //HAS NUMBERS
    for(int i=0; i<strlen(a); i++){
        if(a[i]>='0' && a[i]<='9'){
            numbers = true;
        }
    }

    if(numbers) {
        bool hasNums = true;
        cout << "Has numbers: true +10" << endl;
        score += 10;
    } else {
        bool hasNums = false;
        cout << "Has numbers: false -10" << endl;
        score -= 10;
    }

    //HAS CAPITALS
    for (int i=0; i<strlen(a); i++){
        if (isupper(a[i])) {
            hasCaps = true;
            break;

        } else {
            hasCaps = false;
        }
    }

    if(hasCaps == true) {
        score += 10;
        cout << "Has capital letters: true +10" << endl;
    } else {
        cout << "Has capital letters: false -10" << endl;
    }

    cout << " " << endl;

    cout << "final score: " << score << " out of 30" << endl;

    if(score <= 10) {
        cout << "Password strength: terrible, make a new password";
    } else if(score <= 20) {
        cout << "Password strength: okay, could be better";
    } else if(score <= 30) {
        cout << "Password strength: nice password you got there, it's good and strong";
    }
    cout << " " << endl;
    cout << " " << endl;
}


int main(){

    string choice;
    bool running = true;

    cout << "Enter 111 to exit" << endl;
    while(running == true) {
        cout << "1. Generate password\n2. Test password" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        if(choice == "1"){
            generatePW();
        } else if(choice == "2") {
            testPW();
        } else if(choice == "111") {
            cout << "Thanks for using my program!";
            bool running = false;
            break;
        } else {
            cout << "An error has occured.";
        }
    }


    return 0;
}