#include<iostream>
using namespace std;
string containsSeven(int numbers[], int size);

main()
{
    int size;
    cout<<"Enter the size of Array: ";
    cin>>size;
    int numbers[size];
    for(int idx=0; idx<size; idx++)
    {
        cout<<"Enter Element "<<idx+1<<": ";
        cin>>numbers[idx];
    }

   cout<<containsSeven(numbers,size);
}

string containsSeven(int numbers[],int size)
{  
    string result="there is no 7 in the array";
    for(int idx=0; idx<size ;idx++)
    {
        int n=numbers[idx];
        while(n!=0)
        {
           int i=n%10;

        if(i==7){
            result="Boom!";
            break;
        }
           int j=n/10;
             n=j;
        }
    }
    return result;
}