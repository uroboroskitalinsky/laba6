//
//  main.cpp
//  VVP_6
//
//  Created by Роберт Скиталинский on 08.12.2021.
//

#include <iostream>
#include <cmath>

using namespace std;

/*int main()
{
    int a,b;
    cout << "A" << " ";
    cin >> a;
    cout << "B" << " ";
    cin >> b;
    swap(a,b);
    cout << "A" << " " << a << "\n" << "B" << " " << b << endl ;
    return 0;
}
int main(){
   int a,b,c;
    cout << "A" << " ";
    cin >> a;
    cout << "B" << " ";
    cin >> b;
    cout << "C" << " ";
    cin >> c;
   swap(a,b);
   swap(a,c);
   cout << "A" << a << "B" << b << "C" << c;
   return 0;
}
 
int main(){
   int a,b,c;
 cout << "A" << " ";
 cin >> a;
 cout << "B" << " ";
 cin >> b;
 cout << "C" << " ";
 cin >> c;
   swap(b,c);
   swap(a,c);
   cout << "A" << a << " " << "B" << b << " " << "C" << c;
   return 0;
}

int main () {
    int x,y;
    cin >> x;
    y = 3 * pow(x,6) - 6 * pow(x,2) - 7;
    cout << "Y = " << y;
    return 0;
}

int main() {
    int x,y;
    cin >> x;
    y = 4 * pow(x - 3, 6) - 7 * pow(x - 3, 3) + 2;
    cout << "Y = " << y;
    return 0;
}*/
 
 
int main () {
    int a,b;
    cin >> a;
    b = pow(a,5);
    a = b * a * a * a;
    cout << a;
    return 0;
}
 
 
int main () {
    int a,b,c;
    cin >> a;
    b = pow(a,5);
    c = pow(a,5);
    a = b * c * a * a * a * a * a;
    cout << a ;
    return 0;
}

