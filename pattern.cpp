#include<bits/stdc++.h>
using namespace std;
void print1(int n)
{
 for (int i = 0; i < n ; i++)
    {
        // for space
        for (int j = 0; j < n-i+1; j++)
        {
            cout<< " ";
        }
        for (int j = 0; j < (2*i)+1; j++)
        {
            cout<< "*";
        }
        for (int j = 0; j < n-i+1; j++)
        {
            cout<< " ";
        }
        cout << endl;
        
    }
}

void print2(int n)
{
 for (int i = 1; i <= (2*n-1) ; i++)
    {
        int stars = i;
        if(i>n) stars = (2*n-i);
        for (int j = 1; j < stars; j++)
        {
            cout<<"*";
        }
        
        cout << endl;
        
    }
}
void print3(int n){

      int start = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            start = 1;
        }
        else start = 0;
        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1-start;
        }
        cout<<endl;
    }

    
}
void print4(int n){
  int space = 2 * (n-1);
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <=i; j++)
    {
        cout<< j;
    }
    for (int j = 1; j <=space; j++)
    {
        cout<< " ";
    }
    for (int j = i; j >=1; j--)
    {
        cout<< j;
    }
      cout<<endl;
      space -=2;
  }
  
  
  
  
  
  }
void print5(int n){
    int num = 1;
    for (int i = 0; i <= n; i++)
    {
     for (int j = 0; j <= i; j++)
     {
        cout << num << " ";
        num = num + 1;
     }
       cout<<endl;
    }
    
}
void print6(int n){
   for (int i = 0; i < n; i++)
   { char ch = 'A' + i;
     for (int j = 0; j <=i; j++)
     {
        cout << ch << " ";
     }
        cout << endl;
   }
   
}
void print7(int n)
{
 for (int i = 0; i < n ; i++)
    {
        // for space
        for (int j = 0; j < n-i+1; j++)
        {
            cout<< " ";
        }

        char ch ='A';
        int breakpoint = (2*i+1)/2;
        for (int j = 0; j <= (2*i)+1; j++)
        {
            cout<< ch ;
            if (j <=breakpoint)
            {
                ch++;
            }
            else ch--;
        }

        for (int j = 0; j < n-i+1; j++)
        {
            cout<< " ";
        }
        cout << endl;
        
    }
}
void print8(int n){
    for (int i = 0; i < n; i++)
    {
        for (char ch= 'E'-i; ch<= 'E'; ch++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    
}
void print9(int n){
    int inis=0;
    for (int i = 0; i < n; i++)
    {  /*stars*/
        for (int j = 1;  j<= n-i; j++)
        {
            cout<<"*";
        }
        /*spaces*/
        for (int j = 0; j< inis; j++)
        {
            cout<<" ";
        }
        /*spaces*/
        for (int j = 1;  j<= n-i; j++)
        {
            cout<<"*";
        }
        inis += 2;
        cout<<endl;
        
    }
    inis = 2*n - 2;
    for (int i = 0; i <= n; i++)
     {  /*stars*/
        for (int j = 1;  j<= i; j++)
        {
            cout<<"*";
        }
        /*spaces*/
        for (int j = 0; j< inis; j++)
        {
            cout<<" ";
        }
        /*spaces*/
        for (int j = 1;  j<= i; j++)
        {
            cout<<"*";
        }
        inis -= 2;
        cout<<endl;
        
    }
}
void print10(int n){
    for (int i = 1; i <=2*n-1; i++)
    {
        int spaces = 2*n - 2;
        int stars = i;
        if (i>n)stars = 2*n - i;
        {
            for (int j = 1; j <= stars; j++)
            {
                cout<<"*";
            }

            for (int j = 1; j <= spaces; j++)
            {
                cout<<" ";
            }
            
             for (int j = 1; j <= stars; j++)
            {
                cout<<"*";
            }
            
        }
        cout << endl;
        if(i<n) spaces -=2;
        else spaces +=2;
    }
    
}
void print11(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i == 0 || j == 0 || i == n-1 || j == n-1){
                cout<<"*";
            }
            else
            {
               cout <<" ";
            }
            cout<<endl;
            
        }
        
    }
    
}
void print12(int n){
    for (int i = 0; i < 2*n-1; i++)
    {
        for (int j = 0; j <2*n -1; j++)
        {
            int top = i;
            int left = j;
            int right = (2*n -2) - j;
            int down = (2*n - 2) - i;
            cout << (n -min(min(top,down),min(left,right)));
        }
        cout<<endl;
    }
    
}
int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        print12(n);
    }
    
   
}