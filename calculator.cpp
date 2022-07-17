#include<iostream>  
#include<math.h>  
using namespace std; 
void add();  
void sub();  
void multi();  
void division();  
void sqr();  
void srt();  
void exit();  
int main()  
{  
int opr;  
do  
{  
cout << "Select any operation from the C++ Calculator"  <<endl;
    cout<< "1  = Addition"  <<endl;
    cout<< "2  = Subtraction"  <<endl;
    cout<< "3  = Multiplication"  <<endl;
    cout<< "4  = Division"  <<endl;
     cout<<"5  = Square"  <<endl;
     cout<<"6  = Square Root"  <<endl;
     cout<<"7  = Exit"  <<endl;
     cout<<" Make a choice: "<<endl;
     cin >> opr;  
  
   switch (opr)  
     {  
     case 1:  
    add();  
    break;  
    case 2:  
    sub();    
    break;  
    case 3:  
    multi(); 
    break;  
    case 4:  
    division(); 
    break;  
    case 5:  
    sqr(); 
    break;  
    case 6:  
    srt(); 
    break;  
    case 7:  
    exit(0); 
    break;  
    default:  
    cout <<"Something is wrong..!!";  
    break;  
    }  
    cout <<" \n------------------------------\n";  
    }while(opr != 7);  
    }  
  
void add()  
{  
int n, sum = 0, i, number;  
cout<<"How many numbers you want to add: ";  
cin >> n;  
cout << "Please enter the number one by one: \n";  
for (i = 1; i <= n; i++)  
{  
cin >> number;  
sum = sum + number;  
}  
cout << " Sum of the numbers = "<< sum<<endl;;  
}  
void sub()  
{  
int num1, num2, z;  
cout <<"  Enter the First number = "<<endl;  
cin >> num1;  
cout << " Enter the Second number = "<<endl;  
cin >> num2;  
z = num1 - num2;  
cout <<" Subtraction of the number = " << z <<endl;  
}  
void multi()  
{  
int num1, num2, mul;  
cout <<"  Enter the First number = " <<endl;  
cin >> num1;  
cout << " Enter the Second number = "<<endl;  
cin >> num2;  
mul = num1 * num2;  
cout <<" Multiplication of two numbers = " << mul <<endl;  
}  
void division()  
{  
int num1, num2, div = 0;  
cout <<"  Enter the First number = " <<endl;  
cin >> num1;  
cout << " Enter the Second number = "<<endl;  
cin >> num2;  
while ( num2 == 0)  
     {  
     cout << " Divisor canot be zero" <<endl;  
        cout<< " Please enter the divisor once again: "<<endl;  
         cin >> num2;  
         }  
div = num1 / num2;  
cout <<" Division of two numbers = " << div <<endl;  
}  
void sqr()  
{  
int num1;  
float sq;  
cout <<"  Enter a number to find the Square: " <<endl;  
cin >> num1;  
sq = num1 * num1;  
cout <<" Square of " << num1<< " is : "<< sq <<endl;  
}  
void srt()  
{  
float q;  
int num1;  
cout << " Enter the number to find the Square Root:" <<endl;  
cin >> num1;  
q = sqrt(num1);  
cout <<"  Square Root of " << num1<< " is : "<< q <<endl;  

} 
