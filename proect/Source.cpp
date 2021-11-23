#include <iostream>
#include <cmath>

using namespace std;


const double epsilon = 0.00001;


double
f(double x)
{


    return atan(x) + pow(x, 2) - 2;


}

int
FirstProgram()
{
     double a, b, c;


    a = 1.0;

    b = 3.0;


    while (b - a > epsilon)

    {

        c = (a + b) / 2;

        if (f(b) * f(c) < 0)

            a = c;
        else

            b = c;

    }

    cout << (a + b) / 2 << endl;

    return 0;


}




double
func(double x)
{

    return atan(x) + pow(x, 2) - 2;


}

int
SecondProgram()
{



    double eps = 0.00001;


    for (double x = 1.0; x <= 3.0; x = x + eps)

    {


        double y = func(x);


        if (fabs(0 - y) < eps)

        {


            cout << x << endl;


            break;


        }


    }




    return 0;


}

int
main()
{


    int n;



    cout <<

        " Hello there! There are two ways to solve this math problem, mate. " <<

        endl;


    cout << " Just choose : " << endl;


    cout << " If you want to solve the problem using dihotomia press '1' ; "
        <<
        endl;


    cout << " Or you can solve it using brut force by number '2' ; " << endl;


    cin >> n;



    if (n == 1)

    {


        cout << FirstProgram();


    }


    else if (n == 2)

    {


        cout << SecondProgram();


    }


    else


    {


        cout <<

            "bro , just '1' and '2' , nothing else. Restart the program and try again. ";


    }




    return 0;


}