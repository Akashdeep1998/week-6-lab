#include <iostream>

using namespace std;

int main ()
{
    int a;  
    cout<<"Enter score of student:";
    cin >> a;
 if(a>=86)
{
    cout<<"grade of student is A";

}
else if (a>=72)
{
    cout<<"grade of student is B";

}
else if (a>=60)
{
    cout<<"grade of student is C";
}
else if (a>=50)
{
    cout<<"grade of student is D";
}
else
{
    cout<<"student is fail ";
}
return 0;
}