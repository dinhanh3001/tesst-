#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[100];
    for(int i =0; i< n; i++)
    {
        cin >>a[i];
    }
    for(int i =0; i< n-1; i++)
    {
        int min = i;
        for(int j  = i+1; j< n; j++)
        {
              if(a[j]<a[min])
              {
                min = j;
              }
        }
        swap(a[i],a[min]);

    }
    cout <<"Danh sach sau khi sap xep la :\n";
    for(int i =0; i< n; i++)
    {
        cout <<a[i]<<" ";
    }
    cout <<"Ket thuc chuong trinh :\n";
    return 0;
}