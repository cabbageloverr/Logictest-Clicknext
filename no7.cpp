#include <iostream>
using namespace std;

int main() {
    int second;

    cin >> second;
    
    int hour = second / 3600;
    int minute = (second % 3600) / 60;
    int sec = second % 60;

    printf("%02d:%02d:%02d\n", hour, minute, sec); 

    
    return 0;
}