#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream artikli;
    int n;

    cout<<"Upisite koliko ce te artikla unijeti: ";
    cin>>n;
    string artikl[n];
    int cijena[n];
    datoteka.open("artikli.txt", ios::app);


         while ( 1 )
    {
        datoteka >>artikl[n];
        if( datoteka.eof() == true )
            break;
        datoteka.ignore();
        getline(datoteka, artikl[n]);
        datoteka >> cijena[n];
        n++;


        if(datoteka.eof()==true)
            break;

         datoteka.close();

    }
    for(int i=0;i<n;i++)
    {
        cout<<"Unesi ime artikla ";
    getline(cin,artikl[i]);
        cout<<endl<<artikl;
        artikli.txt>>artikl;
        cout<<"Cijena artikla: "<<endl;
        cin>>cijena[i];

        datoteka<<artikl<<endl<<cijena<<endl;
    }

    return 0;
}

