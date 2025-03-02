#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main(){
    string num1;
    cin >> num1;
    int size = num1.size();
    
    // Allocate extra space for null terminator
    char *num2 = new char[size];  
    int counter = 0;
    
    // Corrected for loop syntax
    for (int i = size - 1; i >= 0; i--){
        num2[counter] = num1[i];
        counter++;
    }
    // Null-terminate the character array

    int result1, result2;
    
    // Convert string to integer using stringstream
    stringstream s1(num1);
    s1 >> result1;
    
    stringstream s2(num2);
    s2 >> result2;
    
    cout << result2 << endl;
    
    if(result1 == result2){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    

}
