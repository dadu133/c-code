//Q.1 Write a program for the swapping of two numbers ?
#include<iostream>
#include<limits.h>
#include<string.h>
using namespace std;
/*int main()
{
    int a,b,temp;
    cout<<endl<<"Please enter the value of a first number ";
    cin>>a;
    cout<<endl<<"Please enter the value of a second number ";
    cin>>b;
    cout<<endl<<"Before swapping value of a is "<<a<< " and b is "<<b;
    temp=a;
    a=b;
    b=temp;
    cout<<endl<<"After swapping the value of a is "<<a<< " and b is "<<b;
 return 0;
} */ 
//Q.2 Write a program to find the largest number among three numbers entered by the user ?
 /*int main()
 {
    int num1,num2,num3;
    cout<<endl<<"Please enter the value of first number";
    cin>>num1;
    cout<<endl<<"Please enter the value of second number";
    cin>>num2;
    cout<<endl<<"Please enter the value of third number";
    cin>>num3;
    if (num1>num2)
    {
        if (num1>num3)
        {
            cout<<endl<<"Number 1 is largest";
        }
        else
        {
            cout<<endl<<"Number 3 is largest";
        }
        
    }
    else
    {
        if(num2>num3)
        {
            cout<<endl<<"Number 2 is largest";
        }
        else
        {
            cout<<endl<<"Number 3 is largest";
        }
    }
   return 0;
 }  */ 


 //Q.3 Write a program to check whether a year enterd by the user is leap year or not ?
    /*int main()
 {
    int year;
    cout<<endl<<"Please enter any leap year";
    cin>>year;
    if(((year%4==0)&&(year%100!=0))||(year%400==0))
    {
        cout<<endl<<"Entered year is a leap year";
    }
    else
    {
        cout<<endl<<"Entered year is not a leap year";
    }
   return 0;
 }*/
//Q.4 Write a program to display Fibonacci Series up to the nth term ? (Using loops).  
  /*int main()
  {  
    int a,b,c,num,i;
    a=0;
    b=1;
    cout<<endl<<"Please enter the number of elements in fiboannaci series";
    cin>>num;
    cout<<a<<" ";
    cout<<b<<" ";
    for ( i = 1; i <=num-2; i++)
    {
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }    
  return 0;
  } */
//Q.5 Write a program to check whether a number is prime or not?
 /* int main()
  {
    int num,i,cnt=0;
    cout<<endl<<"Please enter any number";
    cin>>num;
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            cnt++;
        }
    }
    if(cnt==2)
    {
        cout<<endl<<"Entered number is a prime number";
    }
    else
    {
        cout<<endl<<"Entered number is not prime number";
    }  
  return 0;
}*/
/*Q.6 Write a program to print this pattern using loops for n=5? 
                         *
                        * *
                       * * *
                      * * * *
                     * * * * *          
 int main()
 {                   
  int i,j,k,space=15;
  for(i=1;i<=5;i++)
  {
       for(j=1;j<=space;j++)
        {
            cout<<" ";
        }
        for (k=1; k <=i; k++)
        {
            cout<<"* ";
        }
        space--;
        cout<<endl;
  }
 return 0;
}*/ 
// Q.7 Write a program that takes n element from the user and displays the second largest element of the array?
  /*int main()
  { 
   int a[100],i,n,l1,l2;
   cout<<endl<<"Please enter the size of the array ";
   cin>>n;
   cout<<endl<<"Please enter the elements of the array ";
   for( i = 0; i < n; i++)
   {
      cin>>a[i];
   }
   l2=INT_MIN;
   l1=INT_MIN;
   for ( i = 0; i < n; i++)
   {
       if(a[i]>l1)
       {
           l2=l1;
           l1=a[i];
       }
       else if (a[i]>l2&&a[i]<l1)
       {
           l2=a[i];
       }
       
   }
   cout<<endl<<"Second largest element is "<<l2;
  return 0;
} */
//Q.8 https://www.hackerrank.com/challenges/array-left-rotation/problem left rotation problem of array ?
 
 /*int main()
 {
  int i,n,d;
  cout<<endl<<"Please enter the size of the array ";
  cin>>n;
  cout<<endl<<"Please enter the number of left rotation to be performed on array ";
  cin>>d;
  int a[n],s[n];
   cout<<endl<<"Please enter the elements of the array ";
   for( i = 0; i < n; i++)
   {
      cin>>a[i];
   }
   for(i=0;i<n;i++)
   {
       s[i]=a[(d+i)%n];
   }
   for(i=0;i<n;i++)
   {
       cout<<s[i]<<" ";
   }
  return 0;
 }  

 //Q.9 https://www.hackerrank.com/challenges/grading/problem grading problem of studentd ?

 int main()
 {
   char s[100];
   int i,words=0;
   cout<<endl<<"Please enter any string";
   gets(s);
   for(i=0;s[i]!='\0';i++)
   {
      if(s[i]>=65&&s[i]<=90)
      {
          words++;
      }
   }
   cout<<endl<<"Number of words in the string is "<<words+1;
  return 0;
}  


//Q.10 https://www.hackerrank.com/challenges/grading/problem camel case problem ?

  int main()
  {
    int n,a,b,i;
    cout<<endl<<"Please enter the number of students ";
    cin>>n;
    for(i=0;i<n;i++)
    {
      cout<<endl<<"Please enter the grades of "<<n<<" students ";
      cin>>a;
      if(a<38)
      {
        cout<<a<<" ";
      }
      else
      {
        b=(a/5+1)*5;
        if(b-a<3)
        {
            cout<<b<<" "; 
        }
        else
        {
            cout<<a<<" ";
        }
        
      }
    }
  return 0;
 } */
   

    