 #include<iostream>
using namespace std;

int data[20];
int n;

void main()
{
int i, j, tmp;

cout<<"---------------------------------------------"<<endl;
cout<<"BUBBLE SORT ASCENDING"<<endl;
cout<<"---------------------------------------------"<<endl;
cout<<"INPUTKAN BANYAKNYA DATA : ";
cin>>n;
cout<<"---------------------------------------------"<<endl;
for(i=0; i<n; i++)
{
cout<<"INPUTKAN BILANGAN KE-["<<(i+1)<<"] : ";
cin>>data[i];
}

cout<<"---------------------------------------------"<<endl;
cout<<"DATA YANG DIINPUTKAN : "<<endl;
for(i=0; i<n; i++)
{
cout<<data[i]<<" ";
}
cout<<endl<<"---------------------------------------------"<<endl;

for(i=0; i<n; i++)
{
for(j=i+1; j<n; j++)
{
if(data[i]>data[j])
{
tmp = data[i];
data[i] = data[j];
data[j] = tmp;
}
}
}

cout<<"DATA SETELAH DIURUTKAN SECARA ASCENDING : "<<endl;
for(i=0; i<n; i++)
{
cout<<data[i]<<" ";
}
cout<<endl<<"---------------------------------------------"<<endl;
cout<<"BUBBLE SORT SELESAI !"<<endl;
cout<<"---------------------------------------------"<<endl;
getch();
}
