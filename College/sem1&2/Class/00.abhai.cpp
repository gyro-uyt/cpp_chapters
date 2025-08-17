
#include <iostream>
using namespace std;
int main()
{
int la, r, e, t, a, ac, isc, p,pr, ru, mo;
char  n;
cout<<"name: "<<endl;
cin>>n;
cout<<"a/c number: "<<endl;
cin>>ac;
cout<<"ifsc number"<<endl;
cin>>isc;
cout<<"Enter pin:"<<endl;
cin>>p;
if(p=8770)
{
cout<<"Press\n 1-Home loan\n2-Car loan\n3-Personal loan\n4-education loan\n4-Business loan";
cout<<"type number:";
cin>>pr;
if (pr==3)
{cout<<"Enter the loan amount=";
cin>>la;
cout<<"Enter the tenure for loan(in months)=";
cin>>t;
cout<<"Enter interest rate per annum";
cin>>r;
a=la+(la*r)/100;
cout<<"Total amount customer have to pay="<<a<<endl;
e=a/t;
cout<<"Monthly emi="<<e;}
else (pr==1||pr==2||pr==4);
{cout<<"Enter total ruppees you are spending:";
 cin>>ru;
 cout<<"enter money you have:";
 cin>>mo;
 la=ru-mo;
 cout<<"Loan amount:"<<la;
cout<<"Enter the tenure for loan(in months)=";
cin>>t;
cout<<"Enter interest rate per annum";
cin>>r;
a=la+(la*r)/100;
cout<<"Total amount customer have to pay="<<a<<endl;
e=a/t;
cout<<"Monthly emi="<<e;
}
}
else
{cout<<"Invalid pin......";}
return 0;
}