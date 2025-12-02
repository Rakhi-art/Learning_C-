/* 
#include<iostream>
using namespace std;
int main(){
      //TO PRINT HELLO WORLD     

    cout<<"hellow world";
    return 0;
} */

/*
 #include<iostream>
using namespace std;
int main(){
    cout<<"world";
    return 0;
} */

/* 
#include<iostream>
int main(){
    std::cout<<"hello world";
    return 0;
} */

//DATA TYPE

/*
 #include<iostream>
using namespace std;
int main(){
    int age=25;
    cout<<age;
    return 0;
} */

/*
 #include<iostream>
using namespace std;
int main(){
    float a=24.9;
    cout<<a;
    return 0;
}
 */

/*
 #include<iostream>
using namespace std;
int main(){
    char GRADE ='A';
    cout<<GRADE;
    return 0;
} */

/* 
#include<iostream>
using namespace  std;
int main(){
    float pi=13.4;
    cout<<pi;
    return 0;
} */

/*
 #include<iostream>
using namespace std;
int main() {
    bool isale=true;//reture true -->1 & false-->0
    cout<<isale;
    return 0;
} */

/* 
#include<iostream>
using namespace std;

int main(){
    bool a=false;
    cout<< a;
    return 0;

} */

/* #include<iostream>
using namespace std;

int main(){
    double a1=2;
    double a2=-9;
    double a3=9.09;
    cout<<a1<<endl<<a2<<endl<<a3;
    return 0;

} */

/* 
#include<iostream>
using namespace std;

int main(){
    int a1=9;
    int a2=9.8;
    float a3=9; 
    float a4=9.66;
    cout<<a1<<endl<<a2<<endl<<a3<<endl<<a4;
    return 0;
}
 */


// TYPE CASTING
/* 
#include<iostream>
using namespace std;
int main(){
    char grade='A';
    int value=grade;
    cout<<value;
    return 0;
} */

//HOW TAKE INPUT

/*
 #include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter your age:";
    cin>>a;
    return 0;
} */


/* #include<iostream>
using namespace std;
int main(){
    int price;
    cout<<"enter your product price:";
    cin>>price;
    return 0;
}
 */


/* 
//OPERATORS
1) ARITHMETIC--> +,-,*,/,%
2) RELATIONAL--> 
3) LOGICAL-->
 */ 



 // ARITHMETIC OPERATORS:
/* 
 #include<iostream>
 using namespace std;

 int main() {
    int a,b,c;
    a=23;
    b=56;
    c=a+b;  // ADDING TWO NUMBERS:
    cout<<c;
    return 0;
 }
 */

/* 
 #include<iostream>
 using namespace std;

 int main() {
    int a=23;
    int b=9;
    int c=a-b;  //SUBTRACTING TWO NUMBERS:
    cout<<c;
    return 0;
 }
 */
/* 
 #include<iostream>
 using namespace std;
 int main() {
    int a=2;
    int b=4;
    int c=a*b; //MULTIPLYING TWO NUMBERS:
    cout<< c;
    return 0;
    
 } */

 
/*  #include<iostream>
 using namespace std;
 int main() {
    int a=24;
    int b=4;
    int c=a/b; //division TWO NUMBERS:
    int x=b/a; //decimal is not show
    cout<<c<<endl<<x;
    return 0;
 } */
/* 
 #include<iostream>
 using namespace std;
 int main(){
    int a=2;
    int b=4;
    int c=a%b; //MODULO(GIVES REMINDER) TWO NUMBERS:
    cout<<c;
    return 0;
 }
  */
/* 
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter any number:";
    cin>>a;
    int b;
    cout<<"enter any number:";
    cin>>b;
    int c;
    c=a+b;
    cout<<c;
    return 0;
}
 */
/*
#include<iostream>
using namespace std;

int main(){
    cout<<(5/(double)2) <<endl;
    return 0;
}
*/
//output 2.5

/*
#include<iostream>
using namespace std;

int main(){
    int ans = (5/(double)2);
    cout<< ans <<endl; 
    return 0;
}
*/
// output: 2
 
/*
#include<iostream>
using namespace std;

int main(){

    cout<< ((3>1) || (3 > 2)) <<endl ; // '||' is use for or 
    return 0;
}
*/
 // output: 1-true
/*
#include<iostream>
using namespace std;
int main(){
    int a=10;
    int b=a++;
    cout<< "b=" <<b<<endl;
    cout<< "a=" <<a<<endl;
    return 0;
}
    */


/* 
#include<iostream>
using namespace std;
int main(){
    int a=10;
    int b=++a;
    cout<< "b=" <<b<<endl;
    cout<< "a=" <<a<<endl;
    return 0;
 }
// OUTPUT: b= 11
           a=11
 */