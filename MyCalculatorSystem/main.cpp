#include <iostream>

using namespace std;

int main()
{

    float number1, number2;
    char x;


    cout << " o-----------o----------------o" << endl;
    cout << " |Enter Number here:   ";
    cin  >> number1;
    cout << " o------------o---------------o" << endl;
    cout << " |Enter Number here:   ";
    cin  >> number2;
    cout << " o------------o---------------o" << endl;
    cout << " |Enter operator here: ";
    cin  >> x;
    cout << " o------------o---------------o" << endl;

     switch(x){
     case '+':
        cout  << "| Number 1 is:  " << number1 << "|" << endl;
        cout  << "| Number 2 is: " << number2 <<  "|"<< endl;
        cout  << "| The Sum is:  " << number1+number2 << "|" << endl;
        cout << " o------------o---------------o-------o" << endl;
        cout << " Created by: John Clark L. Bernandino" <<endl;
        cout << " o------------o---------------o-------o" << endl;
        break;
     case '-':
        cout  << " Number 1 is:  " << number1 << "|" << endl;
        cout  << " Number 2 is: " << number2 << "|"<< endl;
        cout  << " The Difference is: "  << number1-number2 << "|" << endl;
        cout << " o------------o---------------o-------o" << endl;
        cout << " Created by: John Clark L. Bernandino" <<endl;
        cout << " o------------o---------------o-------o" << endl;
        break;
     case '*':
        cout  << " Number 1 is:  " << number1 << "|" << endl;
        cout  << " Number 2 is: " << number2 <<  "|" << endl;
        cout  << " The Product is " << number1*number2 << "|" << endl;
        cout << " o------------o---------------o-------o" << endl;
        cout << " Created by: John Clark L. Bernandino" <<endl;
        cout << " o------------o---------------o-------o" << endl;
        break;
     case '/':
        cout  << " Number 1 is:  " << number1 <<  "|" << endl;
        cout  << " Number 2 is: " << number2 << "|" << endl;
        cout  << " The Quotient is "  << number1/number2 << "|" << endl;
        cout << " o------------o---------------o-------o" << endl;
        cout << " Created by: John Clark L. Bernandino" <<endl;
        cout << " o------------o---------------o-------o" << endl;
        break;
     default:
        cout << " You Entered a Invalid Key!";
        break;

     }

    return 0;
}
