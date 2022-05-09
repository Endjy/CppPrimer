# 15.1 
> 什么是虚函数

对于某些函数，基类希望派生类 各自 来定义适合本身的版本，此时基类就将 这些函数设置为虚函数

# 15.2 
> protected 访问说明符与 private 有何区别？

protected: 可以被基类 派生类 友元friend 访问
private: 可以被基类 友元 访问

# 15.3
> 定义你自己的 Quote 类和 print_total 函数。

[Quote.h](./Quote.h)  [print_total.cpp](./print_total.cpp)

# 15.4
> 下面哪条声明语句是不正确的？请解释原因。

~~~C++
class Base { ... };
(a) class Derived : public Derived { ... };
(b) class Derived : private Base { ... };
(c) class Derived : public Base;
~~~

* (a) 不正确 类不能派生自身
* (b) 不正确 这是定义{ ... } 而不是声明
* (c) 不正确 派生列表不能出现在这

# 15.5
> 定义你自己的 Bulk_quote 类

[Bulk_quote.h](./Bulk_quote.h)

# 15.6
> 将 Quote 和 Bulk_quote 的对象传给15.2.1节练习中的 print_total 函数，检查该函数是否正确。

[print_total.cpp](./print_total.cpp)

# 15.7
> 定义一个类使其实现一种数量受限的折扣策略，具体策略是：当购买书籍的数量不超过一个给定的限量时享受折扣，如果购买量一旦超过了限量，则超出的部分将以原价销售。

[Limit_quote.h](./Limit_quote.h)

# 15.8
> 给出静态类型和动态类型的定义

静态类型：在编译时已知 变量声明时的类型活着表达式生成的类型
动态类型：直到运行时才可知 变量或者表达式表示的内存中的对象的类型

# 15.9
> 在什么情况下表达式的静态类型可能与动态类型不同？请给出三个静态类型与动态类型不同的例子。

基类的指针或者引用的静态类型可能和动态类型不一致

# 15.10
> 回忆我们在8.1节进行的讨论，解释第284页中将 `ifstream` 传递给 `Sales_data` 的`read` 函数的程序是如何工作的。

`std::ifstream` 是 `std::istream`的派生类

# 15.11
> 为你的 `Quote` 类体系添加一个名为 `debug` 的虚函数，令其分别显示每个类的数据成员。

[Quote.h](./Quote.h)

# 15.12
> 有必要将一个成员函数同时声明成 `override` 和 `final` 吗？为什么？

有 `override` 说明是派生类的函数重写了基类 `final` 是阻止这个类的派生类重写这个虚函数

# 15.13
> 给定下面的类，解释每个 `print` 函数的机理：
```C++
class base {
public:
	string name() { return basename;}
	virtual void print(ostream &os) { os << basename; }
private:
	string basename;
};
class derived : public base {
public:
	void print(ostream &os) { print(os); os << " " << i; }
private:
	int i;
};
```
> 在上述代码中存在问题吗？如果有，你该如何修改它？
```C++
void print(ostream &os) override { base::print(os); os << " " << i; }
```

# 15.14
> 给定上一题中的类以及下面这些对象，说明在运行时调用哪个函数：

```
base bobj; 		base *bp1 = &bobj; 	base &br1 = bobj;
derived dobj; 	base *bp2 = &dobj; 	base &br2 = dobj;
(a) bobj.print();	(b)dobj.print();	(c)bp1->name();
(d)bp2->name();		(e)br1.print();		(f)br2.print();
```

* (a) 编译时确定 base
* (b) 编译时确定 derived
* (c) 编译时确定 base
* (d) 编译时确定 derived
* (e) 运行时确定 base
* (f) 运行时确定 derived

# 15.15
>定义你自己的 Disc_quote 和 Bulk_quote。

[Disc_quote](./Disc_quote.h) [Bulk_Disc_quote](./Bulk_Disc_quote.h)



