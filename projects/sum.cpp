#include <iostream> 
using namespace std; 

int main()
{
    int add = 0;
    int integers; 

    while(cin >> integers){
        add += integers; 
    }
    
    cout << add << endl; 
    return 0; 
}