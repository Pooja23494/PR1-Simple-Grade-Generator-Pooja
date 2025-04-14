#include<iostream>
using namespace std;

int main(){

    int score;
    char grade;

    cout<<"Enter Your Score: ";
    cin>>score;

    if(score >=0 && score <=100)
    {
        score >= 90
                ? grade = 'A'
                : score >= 80 && score <= 90
                                    ? grade = 'B'
                                    : score >= 70 && score <= 80
                                                        ? grade = 'C'
                                                        : score >= 35 && score <=70
                                                                            ? grade = 'D'
                                                                            : grade = 'F';                                                                                   
    }
    else
    {
        cout<<"Please enter score between 0-100.";
    }                                                               
                      
    switch(grade)
    {
        case 'A':
            cout<<"Your gade is A. 'Excellent work!'";
            break;
        case 'B':
            cout<<"Your gade is B. 'Well Done'";
            break;
        case 'C':
            cout<<"Your gade is C. 'Good job'";
            break;
        case 'D':
            cout<<"Your gade is D. 'You Passed, but you could do better'";
            break;
        default:
            cout<<"Your gade is F. 'Sorry, you failed'";
            break;
    }

    if(grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D')
    {
        cout<<" You are eligible for the next level.";
    }
    else
    {
        cout<<" Please try again next time";
    }

    return 0;
}