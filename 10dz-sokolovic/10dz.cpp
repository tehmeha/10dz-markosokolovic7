#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream artikli;
    int n;

    cout<<"Upisite koliko ce te artikla unijeti: ";
    cin>>n;
    string artikl[];
    int cijena[];
    datoteka.open("artikli.txt", ios::app);
    while(1)
    {
        //!Profesore ja kad otvorim 13 vjeznu meni nema onog koda kj tream stavit tu!
        if(datoteka.eof()==true)
            break;
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

