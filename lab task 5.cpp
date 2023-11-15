#include <iostream>
using namespace std;
int main() {
  //                             LAB TASK 01
  
int x;
do {
        cout << "Enter a number: ";
        cin >> a;
    }
while (a > 0);

cout << "You entered a non-positive number. Program terminated." << endl;

return 0;*/
}
//                             LAB TASK 02
//                          UNABLE TO PERFORM

//                          LAB TASK 03(A)
#include <iostream>
using namespace std;
int main()



{
int num1= 2,sum=0;

do {
    sum += num1;
    num1 += 2;
}
 while (num1<= 100);

    cout << "The sum of all even numbers between 2 and 100 is: " << sum << endl;

    return 0;
}
//                       LAB TASK 03(B)
#include<iostream>
using namespace std;
int main(){




int num1= 1;
int sum = 0;

while (num <= 100) {
    sum += num1* num1;
    num1++;
    }

cout << "The sum of the squares between 1 and 100 is: " << sum << endl;

return 0;
}
//                            LAB TASK 04
//                            lab task 04 (b)
#include<iostream>
using namespace std;
int main(){

int a, b;
int sum = 0;
cout << "Enter the value of a(must be odd): ";
cin >> a;
cout << "Enter the value of b(must be odd): ";
cin >> b;

for (int i = a; i <= b; i++) {
    if (i % 2 != 0) {
      sum += i;
        }
    }
cout << "The sum of all odd numbers between " << a << " and " << b << " is " << sum << "." << endl;
return 0;
}
