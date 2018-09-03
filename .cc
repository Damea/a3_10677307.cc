#include <iostream>
using namespace std;
int main()
{
    float x;
    char Grade;

    cout << "Welcome, please enter your score ";
    cin >> x;
    

    if (x >=80 && x <= 100)
    {
        Grade = 'A'-Excellent;
    }

    else if (x >= 70 && x <= 79)
    {
        Grade = 'B'-Well done;
    }

    else if (x >= 60 && x <69)
    {
        Grade = 'C'-You can do better;
    }

    else if (x >=50 && x <= 59)
    {
        Grade = 'D- Dont be discouraged , you can do it';
    }

    else if (x >=40  && x <= 49)
    {
        Grade = 'E'- Dont be discouraged , you can do it;
    }
    else
    {
        Grade = 'F';
    }


   ;


    }
    cout << "Thank you";
    return 0;
}
