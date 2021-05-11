#include <iostream>
#include<math.h>
#include<iomanip>
#include<stdlib.h>
#include<fstream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,n,j,iter,p;
    double w=0,t=0,z=0;
    double g,h,l;
    ifstream myfile;
    myfile.open("Untitled1.txt");
    cout<<"Enter the number of equations: "<<endl;
    myfile>>n;
    cout<<"n is"<<n<<endl;
    vector<vector<double>> a(n,vector<double>(n+1,0));
    vector<double> x(n,0);
    double eps,y;
    cout<<"Enter the number of elements in the matrix"<<endl;
    for(i=0;i<n;i++)
    {
        //cout<<"Row number"<<i+1<<endl;
        for(j=0;j<=n;j++)
        {
            myfile>>a[i][j];
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"Enter the accuracy"<<endl;
    myfile>>eps;
    cout<<"Eps "<<eps<<endl;
    cout<<"Enter the number of iterations"<<endl;
    cin>>iter;
    cout<<"Following are the iterations"<<endl;
    for(p=0;p<iter;p++)
    {
        cout<<"Iteration ="<<p+1<<endl;
        g=((1.0/a[0][0])*(a[0][3]-(t*a[0][1])-(z*a[0][2])));
        h=((1.0/a[1][1])*(a[1][3]-(w*a[1][0])-(z*a[1][2])));
        l=((1.0/a[2][2])*(a[2][3]-(w*a[2][0])-(t*a[2][1])));
        w = g;
        t = h;
        z = l;
        cout<<setprecision(4)<<w<<"\n"<<setprecision(4)<<t<<"\n"<<setprecision(4)<<z<<endl;
    }
    cout<<"Final Answer ="<<endl;
    cout<<setprecision(6)<<w<<"\n"<<setprecision(6)<<t<<"\n"<<setprecision(6)<<z<<endl;
    return 0;
}
