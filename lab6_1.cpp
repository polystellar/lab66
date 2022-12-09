#include<iostream>
using namespace std;

int main(){

    int num = 1;
    int even = 0;
    int odd = 0;

   


    // cout << "Enter an integer: ";
    // cin >> num;


    while (num != 0) {

        cout << "Enter an integer: ";
        
        cin >> num;

        if (num == 0 ) {

            break;
        }


        if (num % 2 == 0) {


            even++;
        }

        if (num % 2 == 1) {

            odd++;

        }

    }




    cout << "#Even numbers = " << even << endl;
    cout << "#Odd numbers = "<< odd << endl;
    return 0;
}