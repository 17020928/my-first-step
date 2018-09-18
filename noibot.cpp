#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream file;
    file.open("C:\\Users\\Asus\\Desktop\\cáu trúc\\bai2.txt");
    int i=0,t;
    int *a = new int[i+1];
    while(file)
    {
        file>> a[i];
        i++;
    }
    int n=i-1;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    file.close();
    delete[] a;
}
