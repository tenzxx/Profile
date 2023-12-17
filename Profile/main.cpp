//
//  main.cpp
//  Profile
//
//  Created by tenzin choten on 17/12/23.
//

#include <iostream>
using namespace std;

class Profile {
public:
    int n;
    void input(){
        cout<<"Enter the number of follower\n";
        cin>>n;
    }
    
    void check(){
        if(n >= 1000)
            cout<<"Influencer have large follower\n";
        else
            cout<<"Influencer have less follower\n";
    }
};


int main() {
    Profile p;
    p.input();
    p.check();
   
    return 0;
}
