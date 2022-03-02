#include<bits/stdc++.h>
using namespace std;
int main()
{      
       float dollars;
       float pounds,audolr,yen,rupees,pesos;
      
       cout<<"Enter currency in American Dollars"<<endl;
       cin>>dollars;
      
       pounds=dollars*0.75;
       pesos=dollars*20.71 ;
       yen=dollars*115.32;
       audolr=dollars*1.38;
       rupees=dollars*75.79;
       cout<<dollars<<" American dollars are equal to "<<pounds<<" British pounds"<<endl;
       cout<<dollars<<" American dollars are equal to "<<pesos<<" Mexican pesos"<<endl;
       cout<<dollars<<" American dollars are equal to "<<yen<<" Japanese yen"<<endl;
       cout<<dollars<<" American dollars are equal to "<<rupees<<" Indian rupees"<<endl;
       cout<<dollars<<" American dollars are equal to "<<audolr<<" Australian dollars"<<endl;
       

       return 0;
}