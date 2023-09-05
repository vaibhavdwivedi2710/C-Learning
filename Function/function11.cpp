#include <iostream>
using namespace std;
// function to check if the person is eligible to vote or not
bool Checkeligible(int age, int limit){
    if(age>=limit){
        // person is eligible
        return true;
    }
    else{
        // person is not eligible
        return false;
    }

}
int main(){
    int voting_limit =18;
    int is_eligible_for_voting = Checkeligible(21,voting_limit);
    if(is_eligible_for_voting){
        cout<<"Yes the Current is eligible to voting";
    }
    else{
        cout<<"No, Current Person is not eligible to voting";
    }
    return 0;
}