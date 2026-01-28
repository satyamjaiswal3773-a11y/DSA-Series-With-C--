#include <iostream>
#include <vector>       // for using vector be must include this namespace
using namespace std;


int main(){
    vector<int> vec;

    vec.push_back(25);                           // To add value in last 
    vec.push_back(35);                           
    vec.push_back(45);                           

    cout << "After = " << vec.size() << endl;

    vec.pop_back();           // To remove  value in last 

//    cout << vec.front() << endl;   // gives first value

//    cout << vec.back() << endl;    // gives last value

    cout << vec.at(1) << endl;    // to acces value from index

    return 0;
}