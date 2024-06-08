#include "RegisteredUser.h"
#include <iostream>
#include <cstring>

using namespace std;

// Default constructor
RegisteredUser::RegisteredUser() {
    strcpy(user_ID, "");
    strcpy(address, "");
    for (int i = 0; i < SIZE; ++i) {
        feedback[i] = nullptr;
    }
}

// Overloaded constructor
RegisteredUser::RegisteredUser(char ru_username[], char ru_password[], char ru_email[],
    char ru_phoneNumber[], char ru_DOB[], char ru_id[], char ru_address[])
    : User(ru_username, ru_password, ru_email, ru_phoneNumber, ru_DOB) {
    strcpy(user_ID, ru_id);
    strcpy(address, ru_address);
    for (int i = 0; i < SIZE; ++i) {
        feedback[i] = nullptr;
    }
}

void RegisteredUser::display() {
    User::display();
    cout << "User ID: " << user_ID << endl;
    cout << "Address: " << address << endl;
}

void RegisteredUser::addFeedback() {
    // Implement feedback addition here
}

void RegisteredUser::editUserProfile() {
    // Implement user profile editing here
}

void RegisteredUser::requestPropertyBuying() {
    // Implement property buying request here
}

void RegisteredUser::requestPropertySelling() {
    // Implement property selling request here
}

void RegisteredUser::cancelRequest() {
    // Implement request cancellation here
}

void RegisteredUser::addFeed(char Fb_ID[], char Fb_Date[], char Fb_comment[], int Fb_starRate) {
    feedback[0] = new Feedback(Fb_ID, Fb_Date, Fb_comment, Fb_starRate);
}

void RegisteredUser::displayFeedback() {
    if (feedback[0] != nullptr) {
        feedback[0]->showFeedback();
    }
    else {
        cout << "No feedback available" << endl;
    }
}

RegisteredUser::~RegisteredUser() {
    for (int i = 0; i < SIZE; ++i) {
        if (feedback[i] != nullptr) {
            delete feedback[i];
        }
    }
}
