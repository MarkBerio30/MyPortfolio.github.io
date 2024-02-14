// Equivalent c++ program using nested if-else statement. (Calculator)
#include <iostream>
using namespace std;

int main(){
    float n1, n2, o;
    char op;
    cout << "Enter the First Number: ";
    cin >> n1;
    cout << "Enter Operator (+, -, *, /) ";
    cin >> op;
    cout << "Enter the Second Number: ";
    cin >> n2;
    
    if(op== '+')
    {
        o = n1 + n2;
        cout <<"= " << o;
    }
    else if(op== '-'){
        o = n1 - n2;
        cout <<"= " << o;
    }
    else if (op== '*'){
        o = n1 * n2;
        cout <<"= " << o;
    }
    else if (op== '/'){
        o = n1 / n2;
        cout <<"= " << o;
    }
    else 
      cout<< "Wrong operator your entered ";
    return 0;
    }
