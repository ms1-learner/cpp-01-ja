//C++の関数 `power` は、`base` と `exponent` という2つの引数をとります。//
//`exponent` のデフォルト値は2で、`power` は `base` を `exponent` 回累乗した結果を返します。baseを3、exponentを4としてこの関数を呼び出してください。//

#include <iostream>

//関数の定義//
int base{2};

int power( int base , int exponent){
    return base * exponent;
}

int main(){
    int product { power( 3,4)};
    std::cout << "product:" << product << std::endl;
    return 0 ;
}
