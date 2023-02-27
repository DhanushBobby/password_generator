#include <iostream>
#include<ctime>

using namespace std;

int main(){

    char minInput, maxInput;

    cout<<"Enter a letter (for minimum value)"<< endl;
    cin>>minInput;

    char min = toupper(minInput);

    

    cout<<"Enter a letter (for maximum value)"<< endl;
    cin>>maxInput;

    char max = toupper(maxInput);

    cout<<"Your password is: ";

    srand(time(0));

    for(int i = 0; i < 2; i++){

        char upper = rand() % (max - min + 1) + min;

        cout<<upper;
    }

    for(int i = 0; i < 2; i++){

        char digit = rand() % ((57) - (48) + 1) + (48);

        cout<<digit;
    }



     for(int i = 0; i < 5; i++){

        char lower = rand() % ((max + 32) - (min + 32) + 1) + (min + 32);

        cout<<lower;
    }

     for(int i = 0; i < 5; i++){

        char symbol = rand() % ((47) - (33) + 1) + (33);

        cout<<symbol;
    }


return 0;

}