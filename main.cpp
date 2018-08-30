#include <iostream>

using namespace std;

int main()
{
    int input,counter,flag=0;
    cin>>input;

    for (counter=1; counter<=input;counter++)
    {
        if ((input%counter)==0)
        {
            flag++;
        }
    }
      if (flag==2)
            cout<<endl <<input << " is a prime number . "<<endl;
        else
            cout<< input <<" is not a prime number."<<endl;
        return 0;
}
