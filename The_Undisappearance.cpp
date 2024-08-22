// Welcome to the Number Guessing Game!
// I'm thinking of a number between 1 and 100.
// You have 5 chances to guess the correct number.

// Please select the difficulty level:
// 1. Easy (10 chances)
// 2. Medium (5 chances)
// 3. Hard (3 chances)

// Enter your choice: 2

// Great! You have selected the Medium difficulty level.
// Let's start the game!

// Enter your guess: 50
// Incorrect! The number is less than 50.

// Enter your guess: 25
// Incorrect! The number is greater than 25.

// Enter your guess: 35
// Incorrect! The number is less than 35.

// Enter your guess: 30
// Congratulations! You guessed the correct number in 4 attempts.
#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Welcome to the Number Guessing Game!"<<endl;
    cout<<"I'm thinking of a number between 1 and 100."<<endl;
    cout<<"You have 5 chances to guess the correct number."<<endl;
    cout<<"Please select the difficulty level:"<<endl;
    int difficulty;
    cout<<"Please select the difficulty level:"<<endl;
    cout<<"1. Easy (10 chances)"<<endl;
    cout<<"2. Medium (5 chances)"<<endl;
    cout<<"3. Hard (3 chances)"<<endl;
    cin>>difficulty;
    unordered_map<int,string>mp;
    mp[1]="Easy";
    mp[2]="Medium";
    mp[3]="Hard";

    unordered_map<int,int>chances;
    chances[1]=10;
    chances[2]=5;
    chances[3]=3;
    cout<<"Great! You have selected the" <<mp[difficulty]<<" difficulty level."<<endl;
    cout<<"Let's start the game!"<<endl;

    mt19937 rng(static_cast<unsigned>(std::time(nullptr)));
    // Define a distribution to generate numbers between 1 and 100
    uniform_int_distribution<int> dist(1, 100);
    // Generate a random number between 1 and 100
    int answer = dist(rng);

    
    int count=0;
    while(count<chances[difficulty]){
        cout<<"Enter your guess:";
        int guess;
        cin>>guess;
        cout<<endl;
        if(guess==answer){
            cout<<"Congratulations! You guessed the correct number in "<<count+1<<" attempts."<<endl;
            break;
        }
        else if(guess>answer){
            cout<<"Incorrect! The number is less than "<<guess<<"."<<endl;
        }
        else{
            cout<<"Incorrect! The number is greater than "<<guess<<"."<<endl;
        }
    }
    if(count>=chances[difficulty])cout<<"Try again Next time"<<endl;

    return 0;

}