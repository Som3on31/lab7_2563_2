#include <iostream>
#include <string>

using namespace std;

int main(){
    int age,height,property;
    string status;

    cout << "Enter your age: ";
    cin >> age;

    if (age<=20){
        cout << "Enter your height: ";
        cin >> height;
        if (height>=175){
            cout << "Enter your property: ";
            cin >> property;
            status = (property>69000000)? "MARRIED":"ONE-NIGHT-STAND" ;
        }else status = (height>=160)? "FRIEND" : "UNFRIEND" ;
    }else if (age<30){
        cout << "Enter your property: ";
        cin >> property;
        status = (property>10000000)? "BEST FRIEND":"UNFRIEND" ;
    }else status="UNFRIEND";
    
    cout << "Your status = "<< status;

    return 0;
}

