#include<iostream>
using namespace std;
 
int main()
{
    int n, pierwsza, pom;
 
        cout<<"Podaj liczbe: ";
        cin>>n;

 
        cout<<"Czynniki pierwsze liczby "<<n<<": ";
 
        int k=2; 
 
        while(n>1&&k<=pierwsza)
        {
                while(n%k==0) 
                {
                        cout<<k<<" ";
                        n/=k;
                }
                ++k;
        }
        
        if(n>1)
               cout<<n;
        cout<<endl;
 
        return 0;
}
