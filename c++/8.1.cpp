#include<iostream>
using namespace std;

class sample{
    int x;
    int y;
public:
    void getinfo(){
        cout << "Enter two number" << endl;
        cin >> x >> y;
    }
    void display(){
        cout << "x= " << x << endl;
        cout << "y= " << y << endl;
        // cout << "sum = " << sum() << endl;
        // cout << "diff= " << diff() << endl;
        // cout << "mult= " << mult() << endl;
        // cout << "div= " << div() << endl;

        
    }
    int sum(){
        cout<< "sum is " << x+y <<endl;
    }
    int diff(){
        cout << "difference is " << x-y << endl;
    }
    int mult(){
        cout << "multiplication is "<< x*y << endl;
    }
    int div(){
        cout << "div is" << x/y << endl;
    }

};

int main(){
    sample obj;
    obj.getinfo();
    obj.display();
    obj.sum();
    obj.diff();
    obj.mult();
    obj.div();
    return 0;
}