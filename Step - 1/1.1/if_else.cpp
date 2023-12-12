#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // Write a program that takes an input of age and prints if you are adult or not.
    int age;
    cin >> age;

    if(age>=18) {
        cout << "You are an adult!" << endl;
    }else {
        cout << "You are not an adult!" << endl;
    }
    
    // Ask the user to enter marks and print the corresponding grades.
    int marks;
    cin >> marks;

    if (marks < 25)
    {
        cout << "F" << endl;
    }
    else if (marks >= 25 && marks <= 44)
    {
        cout << "E" << endl;
    }
    else if (marks >= 45 && marks <= 49)
    {
        cout << "D" << endl;
    }
    else if (marks >= 50 && marks <= 59)
    {
        cout << "C" << endl;
    }
    else if (marks >= 60 && marks <= 69)
    {
        cout << "B" << endl;
    }
    else if (marks >= 70 && marks <= 79)
    {
        cout << "A" << endl;
    }
    else if (marks >= 80)
    {
        cout << "A+" << endl;
    }

    // Take the age from the user and then decide for the eligible of job.
    int age;
    cin >> age;

    if (age >= 18 && age <= 60)
    {
        cout << "You are eligible for the job." << endl;
    }
    else
    {
        cout << "You are not eligible for the job." << endl;
    }
    return 0;
}


