#include<iostream>
#include<cmath>
using namespace std;
class Diem
{
	public:
    double x;
    double y;
};


int giai_hpt(double a1, double b1, double c1, double a2, double b2, double c2)
{
    double D = a1*b2 - a2*b1;
    double Dx = c1*b2 - c2*b1;
    double Dy = a1*c2 - a2*c1;
    if(D!=0)
    {
        return 1;
    }
    if(D==0)
    {
        if(Dx==0 && Dy==0)
            return 2;
        else
            return 0;
    }
}
bool thuoc_doan_thang(Diem X, Diem Y, Diem M)
{
    double k1 = (M.x-X.x)/(Y.x-X.x);
    double k2 = (M.y-X.y)/(Y.y-X.y);
    if(Y.x==X.x)
    {
        if(M.x==X.x)
        {
            k1=k2;
        }
        else
            k1=2;
    }
    if(Y.y==X.y)
    {
        if(M.y==X.y)
        {
            k2=k1;
        }
        else
            k2=2;
    }
    if(k1>=0 && k1<=1 && k1==k2)
        return true;
    else
        return false;
}

bool la_trung_nhau(Diem X, Diem Y)
{
    if(X.x==Y.x && X.y==Y.y)
        return true;
    else
        return false;
}

int main()
{
    Diem A, B, C, D, I;
    cout<<"Nhap toa do diem A:\n";
    cin>>A.x>>A.y;
    cout<<"Nhap toa do diem B:\n";
    cin>>B.x>>B.y;
    cout<<"Nhap toa do diem C:\n";
    cin>>C.x>>C.y;
    cout<<"Nhap toa do diem D:\n";
    cin>>D.x>>D.y;
    //Xac dinh pt duong thang AB;
    double a1 = B.y-A.y;
    double b1 = A.x-B.x;
    double c1 = -a1*A.x - b1*A.y;
    //Xac dinh pt  duong thang CD;
    double a2 = C.y-D.y;
    double b2 = D.x-C.x;
    double c2 = -a2*D.x - b2*D.y;
    double d = a1*b2 - a2*b1;
    double Dx = -c1*b2 + c2*b1;
    double Dy = -a1*c2 + a2*c1;
    I.x=Dx/d;
    I.y=Dy/d;

    if(giai_hpt(a1,b1,-c1,a2,b2,-c2)==0)
    {
        cout<<"Hai doan thang AB va CD khong cat nhau";
    }
    if(giai_hpt(a1,b1,-c1,a2,b2,-c2)==2)
    {
        if((la_trung_nhau(B,C) && thuoc_doan_thang(A,D,B)) ||
           (la_trung_nhau(B,D) && thuoc_doan_thang(A,C,B)) ||
           (la_trung_nhau(A,C) && thuoc_doan_thang(B,D,A)) ||
           (la_trung_nhau(A,D) && thuoc_doan_thang(B,C,A)))
            cout<<"Hai doan thang AB va CD cat nhau tai 1 diem";
        else
            cout<<"Hai doan thang AB va CD nam tren cung mot duong thang va co phan trung nhau";
    }
    if(giai_hpt(a1,b1,-c1,a2,b2,-c2)==1)
    {
        if(thuoc_doan_thang(A,B,I) && thuoc_doan_thang(C,D,I))
            cout<<"Hai doan thang AB va CD cat nhau";
        else
            cout<<"Hai doan thang AB va CD khong cat nhau";

    }
}






