#include<iostream>
using namespace::std;

main()
{
    string nomor[6]={"A001","A002","A003","A005","A006","A008"};
    string nama[5]={"Bayu","Irfan","Susiati","Diana","Roni"};
    string member,j,n,namaku;
    int jum=5,b,harga,jm,hs,total=0;
   cout<<"\nmini market";
   cout<<"\napakah anda member(ya/tdk)=";cin>>member;
   if(member=="ya"){
    cout<<"\nmasukkan no id=";cin>>j;
    for(int i=0;i<jum;i++){
        if(j==nomor[i]){
            namaku=nama[i];
        }
    }
    cout<<"\nanda member";
    cout<<"\nnomor id="<<j;
    cout<<"\nnama="<<namaku;
    cout<<"\nmasukkan jumlah barang=";cin>>b;
    for(int t=1;t<=b;t++){
        cout<<"\njumlah=";cin>>jm;
        cout<<"\nharga=";cin>>harga;
        hs=jm*harga;
        total=total+hs*0.05;
    }
    cout<<total;
   }
   else  {
    cout<<"\nmasukkan nama=";cin>>n;
     cout<<"\nmasukkan jumlah barang=";cin>>b;
    for(int t=1;t<=b;t++){
        cout<<"\njumlah=";cin>>jm;
        cout<<"\nharga=";cin>>harga;
        hs=jm*harga;
        total=total+hs;
    }
    cout<<total;
   }
}
