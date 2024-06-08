#pragma once
#include "admin.h"
#include "land.h"
#include "agent.h"
#include "Feedback.h"
#include "User.h"
#define SIZE 2

class RegisteredUser : public User {
private:
    char user_ID[10];
    char address[100];
    Feedback* feedback[SIZE];

public:
    RegisteredUser(); // default constructor
    RegisteredUser(char ru_username[], char ru_password[], char ru_email[], char ru_phoneNumber[],
        char ru_DOB[], char ru_id[], char ru_address[]);
    // overloaded constructor

    void display();
    void addFeedback();
    void editUserProfile();
    void requestPropertyBuying();
    void requestPropertySelling();
    void cancelRequest();

    void addFeed(char Fb_ID[], char Fb_Date[], char Fb_comment[], int Fb_starRate);
    void displayFeedback();

    ~RegisteredUser(); // destructor
};
