// int *merge(),解读为一个函数，返回类型为一个指向int的指针。
//原因：函数调用优先级比指针运算符高

//积分：需要三个参数：积分上限，积分下限，被积函数（因为积分的方法是通法，对任何函数都成立）
//所以参数为函数。由于优先级原因，应该写成 double (*f)(),而不是 double *f()
//这样解读为一个指针，这个指针指向一个函数。
//c语言函数在使用的时候会被转换为函数指针。比如pow(2,4)也是一个函数指针。
//所以在这个积分函数里调用f的时候不用加*解引用（它本身已经是函数指针了。但是加(f*)()也可以。）
//同理，调用这个函数的时候，被积函数也不用加*，只有定义/声明的时候加。
//由于函数指针的概念，甚至可以开一个数组，数组里的内容是函数指针。
//所以： double (*fps[2])(double) = {sin,cos};
//即：fps是一个含有2个元素的数组，数组里的内容是函数指针，指针指向的函数的参数是一个double，返回值是一个double.
//接下来 fps[1]即表示函数cos


//
// Created by hfwei on 2022/12/8.
//

int main() {
  double low = 0.0;
  double high = 1.0;
  double integration = 0.0;

  return 0;
}