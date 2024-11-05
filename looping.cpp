//Shane Pricken
//Looping Lab
//11-5-25


#include <iostream>
#include <cstdlib>

using namespace std;



int main(){
 //   Program 1
 // I don't know how to use getline()
    string quotes[8];
    for (int i = 1; i <= 7; i++){
        cout << "Day #" << i << ": \nWhat would you like your motivational word to be today? "<< endl;
        cin >> quotes[i];
    }
    for (int i = 1; i <= 7; i++){
        cout << "Day #" << i << " Word:" << endl;
        cout << quotes[i] << endl;
    }
    
 //   Program 2
    
    
    int energy = 5;
    int supplies = 0;
    
    while (energy > 0 && supplies < 10) {
        cout << "Energy: " << energy << endl;
        cout << "Supplies: " << supplies << endl;
        cout<< "Would you like to \n 1. Search for supplies (-1 energy; +1 supplies) \n 2. Rest (+2 energy)" << endl;
        cout<< "Chose your decision: " << endl;
        int choice;
        cin >> choice;
        switch (choice){
            case 1: cout << "-1 Energy \n +1 Supplies" << endl;
            energy -= 1;
            supplies += 1;
            break;
            case 2:
            cout << "+2 Energy" << endl;
            energy += 2;
            break;
            
        }
    }
    if (supplies >= 10){
        cout << "Completed. You survived." << endl;
    }
    else if (energy <= 0){
        cout << "Failed. You did not survive." << endl;
    }
    
    
    //Program 3
    // I don't know how to use the random it just gives the same number every time
    int a = rand();
    int guess;
    
    
    a = (a % 10) + 656;
    
    do{
        cout << "Guess the locker passcode: " << endl;
        cin >> guess;
        if (guess == a){
            break;
        }
        else{
            char input;
            cout << "Incorrect. Would you like to try again?" << endl;
            cin >> input;
            if (input == 'y' || input == 'Y'){
                cout << "Goodluck!" << endl;
            }
            else if (input == 'n' || input == 'N'){
                cout << "You lose buster";
            }
            
        }
    }while (guess != a);
    if (guess == a){
        cout << "Congrats! You correctly guessed the code!" << endl;
    }
    
    
    
}

