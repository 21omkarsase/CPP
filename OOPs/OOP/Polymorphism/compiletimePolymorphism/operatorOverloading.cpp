// List of operators that can be overloaded are:
// +	-	*	⁄	%	‸	&	|	~
// !	=	<	>	+=	-=	*=	⁄=	%=
// ‸=	&=	|=	<<	>>	<<=	>>=	==	!=
// <=	>=	&&	||	++	--	,	->*	->
// ( )	[ ]	new	delete	new[]	delete[]

// You can overload both the unary and binary forms of the following operators : + - * &

// You cannot overload the following operators:
// .	.*	::	?:

#include<bits/stdc++.h>
using namespace std;

class B{
public:
    int a,b;

    public:
    int add(){
        return a+b;
    }

    void operator+(B &obj){
        int val1=this->a;
        int val2=obj.a;
        cout<<"output : "<<val2-val1<<"\n";
    }

    void operator() (){
        cout<<"a value using () operator overloading : "<<this->a<<"\n";
    }
};

int main(){
    B obj1,obj2;

    obj1.a=2;
    obj2.a=5;

    obj1+obj2;

    obj1();
    obj2();

    return 0;
}