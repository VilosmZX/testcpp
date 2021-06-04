#include <iostream>
using namespace std;

class login{
private:
    string name = "Joshua", pw = "1234";
    string inpName, inpPw;

public:
    void login(){
        cout << "Name: ";
        cin >> inpName;

        cout << "Password: ";
        cin >> inpPw;

        if(inpName == name && inpPw == pw){
            cout << "login Sucess";
        }
    }
};



int main(){
    main m;
    m.login();

    return 0;
}
