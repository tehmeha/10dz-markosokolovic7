#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream artikli;
      string artikl;
    int n,cijena;

    cout<<"Upisite koliko ce te artikla unijeti: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Unesi ime artikla ";
    getline(cin,artikl);
        cout<<endl<<artikl;
        artikli.txt>>artikl;
        cout<<"Cijena artikla: "<<endl;
        cin>>cijena;

    }

    return 0;
}

