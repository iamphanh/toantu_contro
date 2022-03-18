
//#include<iostream>
//#include<time.h>
//using namespace std;
//int add(int a, int b){
//    return a+b;
//}
//int main() {
//    int a, b;
//    cin >> a >> b;
//    clock_t start, end;
//    double h;
//    start = clock();
//    add(a,b);
//    end = clock();
//    h = (double)(end- start)/ CLOCKS_PER_SEC;
//    cout << "time run " << h;
//    cout << "a + b = " << add(a,b);
//    return 0;
//}

//#include<iostream>
//#include<conio.h>
//using namespace std;
//class sophuc
//{
//              int a,b;
//    public:
//              void getvalue()
//              {
//                 cout<<"Nhap he so a,b:";
//                 cin>>a>>b;
//              }
//              sophuc operator+(sophuc ob)
//              {
//                            sophuc t;
//                            t.a=a+ob.a;
//                            t.b=b+ob.b;
//                            return(t);
//              }
//              sophuc operator-(sophuc ob)
//              {
//                            sophuc t;
//                            t.a=a-ob.a;
//                            t.b=b-ob.b;
//                            return(t);
//              }
//              void display()
//              {
//                            cout<<a<<"+"<<b<<"i"<<"\n";
//              }
//};




//int main()
//{
//   sophuc obj1,obj2,result,result1;
//   obj1.getvalue();
//   obj2.getvalue();
//   result = obj1+obj2;
//   result1=obj1-obj2;
//   cout<<"Gia tri nhap vao:\n";
//   obj1.display();
//   obj2.display();
//   cout<<"Ket qua:";
//   result.display();
//  result1.display();
//   return 0;
//}


//#include<iostream>
//#include<conio.h>
//using namespace std;
//int *findMax(int arr[],int n);
//int main(){
//   int n,i,*p;
//  cout<<"Nhap so du lieu: ";
//  cin>>n;
//  int arr[n];
//  for(i=0;i<n;i++)     {
//    cout<<"Nhap gia tri thu "<<i+1<<" la :";
//   cin>>arr[i];
//}
//  p=findMax(arr,n);
//  cout<<"Gia tri lon nhat la: "<<*p;
//  getch();
//  return 0;
//}
//int *findMax(int data[],int n){
//  int *max=data;
//  int i;
// for(i=1;i<n;i++){
//   if(*max<*(max+i)) *max=*(max+i);
//  }
//  return max;
//}
//#include<iostream>
//#include<conio.h>
//using namespace std;

//   int main()
//    {
//     int arr[5],i;
//     int *p=arr;
//     cout<<"Nhap 5 so:";
//     cin>>*p>>*(p+1)>>*(p+2)>>*(p+3)>>*(p+4);
//     cout<<"Cac so ban vua nhap la:\n";
//     for(i=0;i<5;i++)
//        cout<<arr[i]<<endl;
//     return 0;
//    }





//#include <iostream>
//#include <conio.h>
//using namespace std;
//void chuyendoi(int);
//int main()
//{
//int a;
//cout << "Nhap mot so he 8 gom hai ky so : ";
//cin>>a;
//chuyendoi(a);
//}
//void chuyendoi(int oct)
//{
//long bnum=0;
//int A[6];
//int x;
//int a1,a2,quo,rem;
//a2=oct/10;
//a1=oct-a2*10;
//for(int x=0;x<6;x++)
//{
//A[x]=0;
//}
//cout<<"\na1 = "<<a1<<"\na2 = "<<a2;
//cout<<"\nvong 1"<<endl;
//for (x=0;x<3;x++)
//{
//quo=a1/2;
//rem=a1%2;
//A[x]=rem;
//a1=quo;
//}
//cout<<"\nvong 2"<<endl;
//for(x=3;x<6;x++)
//{
//quo=a2/2;
//rem=a2%2;
//A[x]=rem;
//a2=quo;
//}
//for(x=5;x>=0;x--)
//{
//bnum*=10;
//bnum+=A[x];
//}
//cout << "So nhi phan " << oct << " la " << bnum << "." << endl;
//}


//#include <iostream>
//#include <conio.h>
//using namespace std;
//int main()
//{
//char line[80];
//int so_nguyen_am,phuamh,phuamt,nguyenamh,nguyenamt;
//phuamh=phuamt=nguyenamh=nguyenamt=0;
//cout << "Nhap mot cau : " << endl;
//cin.getline(line,80);
//for(int x=0; line[x]!='\0';x++)
//{
//if(line[x]=='A'||line[x]=='E'||line[x]=='I'||line[x]=='O'||line[x]=='U')
//nguyenamh++;
//else if(line[x]=='a'||line[x]=='e'||line[x]=='i'||line[x]=='o'||line[x]=='u')
//nguyenamt++;
//else if(line[x]>+65&&line[x]<=90)
//phuamh++;
//else if (line[x]>=97&&line[x]<=122)
//phuamt++;
//}
////in ket qua.
//cout << "So phu am la chu hoa = " << phuamh << "." << endl;
//cout << "So phu am la chu thuong = " << phuamt << "." << endl;
//cout << "So nguyen am la chu hoa = " << nguyenamh << "." << endl;
//cout << "So nguyen am la chu thuong = " << nguyenamt << "." << endl;
//so_nguyen_am=nguyenamh+nguyenamt;
//cout << "So nguyen am = " << so_nguyen_am << endl;
//return 0;
//}



//#include <iostream>
//#include <conio.h>
//using namespace std;
//int main()
//{

//char chucai;
//cout << "Nhap mot chu cai : " << endl;
//cin>>chucai;
//cout << "Chu cai truoc va ke tiep lan luot la: " << endl;
//cout << (char)(chucai-1) << endl;
//cout << (char)(chucai+1) << endl;
//return 0;
//}











