


#include <iostream>


using namespace std;


int main() {
    string usernaem;
    int password;
    int balance = 200;
    int choise;
    int withderaw;
    int Deposit;

    cout << "\t\t\t\t\t welcom to your bank \t\t\t\t\t\n";
    cout << "enter your user name :";
    cin >> usernaem;
    cout << "enter your password :";
    cin >> password;
    while (password != 68554) {
        cout << " the enter is woring " << endl;
        cout << "enter the password agine :";
        cin >> password;
    }

    do {

        cout << "1-Check acount " << endl;
        cout << "2-Witdraw cash " << endl;
        cout << "3-Deposit cash " << endl;
        cout << "4-Quite " << endl;
        cout << "chose from the menu :";
        cin >> choise;

        switch (choise) {
        case 1:
            cout << usernaem << " " << "your current balance is : $" << balance;
            break;
        case 2:
            cout << "enter the amount to withderaw : ";
            cin >> withderaw;
            if (withderaw > balance) {
                cout << "you donot have enough money ....";
            }
            else {
                balance = balance - withderaw;
                cout << "your current balance is :$ " << balance;
                break;
            }
        case 3:
            cout << "enter the amount ";
            cin >> Deposit;
            balance = balance + Deposit;
            cout << "your current Deposit : $" << balance;
            break;
        case 4:
            cout << "-----------think you for used this bank-----------";
            break;
        default:
            cout << "this number not find";
            break;
        }

    } while (true);

    return 0;
}
