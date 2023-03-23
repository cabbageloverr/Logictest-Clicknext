#include <iostream>
using namespace std;

int main(){
    
    int input;
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    int a = 0;
    
    cin >> input;

    
    for (int i = 0; i < input; i++)
    {
        for (int j = 0; j < input-(i+1); j++) {
            cout << " ";
           }
        
        for (int j = 0; j < (i+1); j++)
        {
           cout << arr[a] << " ";
           a++;
        }
       cout  << endl;
        
    }
    return 0;
}