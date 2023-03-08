#include <iostream>
#include <string> 
#include <algorithm> 


using namespace std;

int main(int argc, char* argv[]){
    int new_base = 2;
    int remainder, offset;
    int b10_input, dividend;
    string result, remainder_str;

    if(argc < 2){
        printf("Base 10 to Binary Conversion\n");
        
        cout << "Enter Base 10 Input: ";
        cin >> b10_input;
    }
    else {
        b10_input = stoi(argv[1]);
    }

   while(b10_input > 0){
        remainder = b10_input % new_base;
        if(remainder != 0){
            offset = b10_input - remainder;
            b10_input = offset / new_base;
        }
        else{
            b10_input = b10_input / new_base;
        }
        remainder_str = to_string(remainder);
        result = result + remainder_str;
    }
    
    reverse(result.begin(), result.end());    
    cout << "Binary Result: " << result << endl;

    return 0;
}