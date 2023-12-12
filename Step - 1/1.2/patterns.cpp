#include <iostream>
using namespace std;

void pattern_1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern_2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
}
void pattern_3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    
}
void pattern_4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    
}
void pattern_5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i+1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
}
void pattern_6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i+1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    
}
void pattern_7(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n-i-1; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 0; j < 2*i+1; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < n-i-1; j++)
        {
            cout << " ";
        }
        cout << endl;
        
    }
    
}
void pattern_8(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 0; j < 2*n-(2*i+1); j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
        
    }
    
}
void pattern_9(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n-i-1; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 0; j < 2*i+1; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < n-i-1; j++)
        {
            cout << " ";
        }
        cout << endl;
        
    }
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 0; j < 2*n-(2*i+1); j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
        
    }
}
void pattern_10(int n)
{
      for(int i = 1; i <= 2*n-1; i++){

          int stars = i;
          if(i > n) stars = 2*n-i;
          
          for(int j = 1; j <= stars; j++){
              cout<<"*";
          }
          cout<<endl;
      }
    
}
void pattern_11(int n)
{
      int start = 1;
      for(int i = 0; i < n; i++){
          if(i % 2 == 0) start = 1;
          else start = 0;
          
          for(int j = 0; j <= i; j++){
              cout << start;
              start = 1-start;
          }
        cout<<endl;
      }
}
void pattern_12(int n)
{
    int spaces = 2*(n-1);
    
    for(int i = 1; i <= n; i++){
          
        for(int j = 1; j <= i; j++){
            cout << j;
        }
          
        for(int j = 1; j <= spaces; j++){
            cout << " ";
        }

        for(int j = i; j >= 1; j--) { 
            cout << j;
        }
        cout<<endl;
        spaces-=2;
    }
}
void pattern_13(int n)
{
    int num = 1;
      
    for(int i = 1; i <= n; i++){
          
        for(int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num = num + 1;
        }
        cout << endl;  
    }
}
void pattern_14(int n)
{
    for(int i = 0; i < n ; i++){
        for(char ch = 'A'; ch <= 'A'+i ; ch++){
            cout << ch << " ";  
        }
        cout << endl; 
    }
}
void pattern_15(int n)
{
    for(int i = 0; i < n ; i++){

        for(char ch = 'A'; ch <= 'A'+(n-i-1); ch++){
            cout << ch <<" ";      
        }
        cout << endl;
    }
}
void pattern_16(int n)
{
    for(int i = 0; i < n; i++){
          
        char ch = 'A'+i;
        for(int j = 0; j <= i; j++){
            cout << ch << " ";  
        }
        cout << endl;  
    }
}
void pattern_17(int n)
{
    for(int i = 0; i < n; i++){
          
        for(int j = 0; j < n-i-1; j++){
              cout << " ";
          }
          
        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        
        for(int j=1;j<=2*i+1;j++){      
            cout<<ch;
            if(j <= breakpoint) ch++;
            else ch--;
        }
          
        for(int j = 0; j < n-i-1; j++){
            cout << " ";
        }
        cout<<endl;  
    }
}
void pattern_18(int n) 
{
    for(int i = 0; i < n; i++){
        
        for(char ch = ('A'+ n-1)-i; ch <= ('A'+ n-1); ch++){      
              cout << ch << " ";
          }
        cout<<endl;
    }
}
void pattern_19(int n)
{
    int iniS = 0;
    for(int i = 0; i < n; i++){
          
        for(int j = 1; j <= n-i; j++){
            cout << "*";
        }
          
        for(int j = 0; j < iniS; j++){
            cout << " ";
        }
          
        for(int j = 1; j <= n-i; j++){
            cout << "*";
        }
          
        iniS += 2;
        cout << endl;
    }
      
    iniS = 2*n -2;
    for(int i = 1; i <= n; i++){
          
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
          
        for(int j = 0; j < iniS; j++){
            cout << " ";
        }
          
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        
        iniS-=2;
        cout<<endl;
    }
}
void pattern_20(int n)
{
    int spaces = 2*n-2;
    for(int i = 1; i <= 2*n-1; i++) {
        
        int stars = i;
        
        if(i > n) stars = 2*n - i;
          
        for(int j = 1; j <= stars; j++) {
            cout << "*";
        }
          
        for(int j = 1; j <= spaces; j++){
            cout << " ";
        }
          
        for(int j = 1; j <= stars; j++){
            cout<<"*";
        }
          
        cout<<endl;
        if(i < n) spaces -=2;
        else spaces +=2;
    }
}
void pattern_21(int n)
{
    for(int i = 0; i < n; i++) {
         
        for(int j = 0; j < n; j++){
             
            if(i==0 || j==0 || i==n-1 || j==n-1) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}
void pattern_22(int n)
{
    for(int i = 0; i < 2*n-1; i++){
         
        for(int j = 0; j < 2*n-1; j++){
             
            int top = i;
            int bottom = j;
            int right = (2*n - 2) - j;
            int left = (2*n - 2) - i;
            
            cout << (n- min(min(top,bottom), min(left,right))) << " ";
        }
        cout << endl;
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    // pattern_1(n);
    // pattern_2(n);
    // pattern_3(n);
    // pattern_4(n);
    // pattern_5(n);
    // pattern_6(n)
    // pattern_7(n);
    // pattern_8(n);
    // pattern_9(n);
    // pattern_10(n);
    // pattern_11(n);
    // pattern_12(n);
    // pattern_13(n);
    // pattern_14(n);
    // pattern_15(n);
    // pattern_16(n);
    // pattern_17(n);
    // pattern_18(n);
    // pattern_19(n);
    // pattern_20(n);
    // pattern_21(n);
    // pattern_22(n);

    return 0;
}



