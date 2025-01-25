#include <bits/stdc++.h>
//#define int long long
using namespace std;

int arr[101];

void printMessageWithDelay(const string& message, int delay_ms) {
    for (char ch : message) {
        cout << ch << flush; 
        this_thread::sleep_for(chrono::milliseconds(delay_ms));
    }
    cout << endl;
}

int main(){
    for(int i = 0; i <= 100; i++) arr[i] = i;

    printMessageWithDelay("Think a number between 0 to 100", 100);
    printMessageWithDelay("-----------------------------", 200);

    int l = 0, h = 100;

    while (l <= h){
        int mid = (l + h) / 2;

        cout << "Is the number " << arr[mid] << "?" << endl;
        cout << "1. YES " << "2. NO" << endl;

        int x;
        cin >> x;

        if(x == 1){
            cout << "Yeee! I got the number!!!" << endl;
            break;
        }
        else{
            cout << "Is the number greater than " << arr[mid] << "?" << endl;
            cout << "1. YES " << "2. NO" << endl;

            cin >> x;
            if(x == 1){
                l = mid + 1;
            }
            else{
                h = mid - 1;
            }
        }
    }
}
