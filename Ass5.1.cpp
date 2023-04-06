


#include <iostream>
#include <cmath>   //including math library to use absolute value function

using namespace std;


int main()
{
    int num, n = 0, even = 0;  //declaring three variables for number, digit, even digits counter

    cout << "Enter a number: " << endl;   //prompting the user to enter a number
    cin >> num;  

    num = abs(num);  //getting an absolute value of the entered number 

    if (num == 0)  
        cout << "Number of even digits is 1";   //putting a condition for zero case to count 1 digit

    else {

        while (num > 0)
        {
            n = num % 10;       //getting the right digit
            if (n % 2 == 0)    //testing if it is an even digit 
                even++;       //increasing the counter for even digits
        
            num /= 10;       //decreaing the number
        }

        cout << "Number of even digits is: " << even;  //printing the number of even digits
    }

    return 0;
}

