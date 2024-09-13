#include<iostream>
#include<string>
#include<vector>

using namespace std;
class User{
    private:
        string username, password;
    public:
    User (string name, string pass){
        username = name;
        password = pass;
    }

};
class UserManager{
    private:
    vector <User> users; //create object of vector
    public:
    void RegisterUser(){
        string username, password;
        cout << "Enter user name : ";
        cin >> username;
        cout << "Enter password : ";
        cin >> password;

        User newUser(username, password);
        users.push_back(newUser);
        cout<< "\t\t User Register Successfully ......"<< endl;
    }

};
int main(){
    UserManager usermanage;
    int op;
    cout << "\n\n\t\t1. Register User" <<endl;
    cout << "\t\t2.Login" << endl;
    cout << "\t\t3.Show User List " << endl;
    cout << "\t\t4. Search User " << endl;
    cout << "\t\t5. Delete User" << endl;
    cout << "\t\t6. Exit" << endl;
    cout << "\t\tEnter Your Choice : ";
    cin >> op;
    switch(op){
        case 1:
        usermanage.RegisterUser();
        break;
    }

}