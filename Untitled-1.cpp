#include <iostream>
#include <string>
using namespace std;
/*int main(){
    int a, b;
    a = 0;
    b = 1;
    int temp = 0;
    while(a<10){
        cout << a ;
        // cout << b << endl;
        temp = a;
        a = b;
        b = temp + b;
        
    }
    return 0;
}*/

/*
int main(){
    int x;1

    cout << "Please enter an integer" << endl;
    cin >> x;
    if(x<0){
        x = 0;
        cout << "Negative changed to zero" << endl;
    }
    else if(x == 0){
        cout << "Zero" << endl;
    }
    else if(x == 1){
        cout << "Single" << endl;
    }
    else{
        cout << "More" << endl;
    }
    return 0;
}*/

/*int main(){
    for(int i = 2; i<10; i++){
        for(int j =2; j<i; j++){
            if(i % j == 0){
                cout << i << " equals" << j << ' *' << i/j << endl;
                break;
            }
            else{
                cout << i << " is a prime number" << endl;
            }
        }
    }
    return 0;
}*/

/*#include <iostream>
#include <fstream> // 文件操作需要包含的头文件

int main() {
    std::ofstream file("C:/Users/user/Documents/summer_programming_practice/python/output.txt"); // 打开文件
    if (file.is_open()) {
        file << "diego20040328@gmail.com"; // 写入数据
        //file.close(); // 关闭文件
    } else {
        std::cout << "无法打开文件" << std::endl;
    }
    return 0;
}*/

/*#include <iostream>
class Adder{
    public:
        Adder(int x) : x(x){}
        int operator()(int y) const{
            return x + y;
        }
    private:
        int x;
};

int main(){
    Adder closure(10);
    std::cout << closure(5) << std::endl;
    std::cout << closure(20) << std::endl;
    return 0;
}*/

/*#include <iostream>
using namespace std;

class rational{
    public:
        int n, d;
        void set(int x, int y){ n = x; d = y;}
        void show(){ cout << n << "/" << d << "=" << 1.0*n/d << endl;}
};

int main(){
    rational a;
    a.set(4,5);
    a.show();

    rational *p = &a;
    p->set(2,3);
    p->show();
}

(*p).set(2,3)
(*p).show() */

#include<iostream>
#include<string>
using namespace std;
/*int main(){
    int a[10];
    cout << a << endl << sizeof(a) <<endl;
    int b[3] = {11, 22};
    for(int i=0; i<3; i++){
        cout << b[i] << endl;
    
    }
    char x[3] = {'c', 'a', 't'};
    cout << x << endl;
    string haha = "cats";
    cout << haha << endl;
    cout << haha.size() << endl;
    return 0;
}*/

/*int main(){
    int a;
    int *aPtr = nullptr;

    a =7;
    aPtr = &a;
    cout << aPtr << endl << *aPtr << endl << *&aPtr << endl << &*aPtr << endl;
}*/

/*int main(){
    int a[3] = {10, 20 ,30};
    int *aPtr, *bPtr;

    aPtr = a;
    bPtr = &a[0];
    //aPtr == bPtr
    cout << aPtr << endl << bPtr << endl;//輸出0x61fe04, 0x61fe04
    cout << *(aPtr+1) << ' ' << a[1] << endl;//輸出20, 20
    cout << aPtr << endl << aPtr+1 << endl;//輸出0x61fe04, 0x61fe08
    cout << aPtr[1] << endl << a[1] << endl;//輸出20, 20
    //aPtr[1] == *(aPtr+1) == a[1]
    return 0;
}*/

/*int main(){
    int *p;
    p = new int;
    delete p;
    int N, *a;
    cin >> N;
    a= new int[N];
    for(int i=0; i<N; N++) a[i] = i*i;
    delete [] a;

}*/


/*int main(){
    int i, num = 0, *p = nullptr;
    cout << "Please enter the unmber of element";
    cin >> num;
    p = new int[num];
    for(i = 0; i<num; i++){
        cout << "Element " << i << ": ";
        cin >> p[i];
    }
    for(i = 0; i<num; i++){
        cout << "\nSquare of " << p[i] << " is " << p[i]*p[i];   
    }
     delete [] p;
     return 0;
}*/

/*int main(){
    int osize = 10, nsize = 20;
    int *p = nullptr, *temp = nullptr;
    p = new int[osize];
    for(int i = 0; i<osize; i++){
        p[i] = i * i;
        cout << p[i] <<" ";
    }
    temp = new int[nsize];
    for(int i=0; i<osize; i++){
        temp[i] = p[i];
    }
    delete [] p;
    p = temp;
    for(int i=osize; i<nsize; i++){
        p[i] = i*i;
        cout << p[i] << " ";
    }
    return 0;
}*/

/*int main(){
    int a[4] = {5, 6, 7, 8};
    int *b[4] = {a, a+1, a+2, a+3};
    cout << *b[0] << endl;
    char *c = "Bridge";
    char *d[4] = {"Hearts", "Diamonds", "Clubs", "Spaces"};
    cout << c << endl << d[0] << endl;
    return 0;
}*/

/*int main(){
    char a = 'z';
    char *b = &a;
    char **c = &b;
    cout << *b << endl << **c << endl << (void*)*c;
    return 0;
}*/

int main(){
    int i, j;
    int a[2][3] = {{1,2,3}, {4,5,6}};
    int **p = nullptr;
    p = new int*[2];
    for(i=0; i<2; i++){
        p[i] = new int[3];
    }
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            p[i][j] = a[i][j]*a[i][j];
        }
    }
    for(i=0; i<2; i++){
        delete [] p[i];
    }
    delete p;
    return 0;
}
//haha






