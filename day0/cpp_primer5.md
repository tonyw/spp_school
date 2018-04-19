# Cpp Primer5 读书笔记第一章

## 执行Cpp程序
```cpp
int main()
{
    return 0;
}
```
1. `g++ -o prog1 prog1.cc` 命令用来运行程序，-std=c++0x选项用来支持c++11,`g++ -std=c++0x -o prog2 prog2.cc`
2. std::cout 用来打印，std::endl用来打印换行，std::cin用来接收命令行输入，这些都需要`#include <iostream>`这个指令
3. 通常情况下，#include指令放在所有函数之外，一般放在源文件的开始的位置
4. `<<`输出运算符，它接受两个运算对象，左边的对象必须是一个ostream对象，右侧的运算对象是要打印的值
5. std::endl 不仅仅完成当前行，而且会将当前buffer中的内容刷到设备中

## 控制流

1. while循环，for循环

```cpp

#include<iostream>
int main(){
    int sum=0,value=0;
    while(std::cin>>value){
        sum+=value;
    }
    std::cout<<"sum is :"<<sum<<std::endl;
    return 0;
}

```

1. 由于`<<`或者`>>`都是返回的是左边，所以，while的condition实际上是检测std::cin的值，检测字符流的状态


