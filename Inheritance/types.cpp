/*
    multilevel inheritance:
     example:
        class A{ }
        class B:public A{ }
        class C:public B{ }
    
    multiple inheritance
     example:
     class A{
         public:
             void someFunction( ) {...}  
     }
     class B{
         public:
             void someFunction( ) {...}  
     }
     class C:public A, public B{}

    Ambiguity in Multiple Inheritance: both classes having same function signature, doesnot know which one to call
    solution: 
    1. solve using scope resolution operator
        C object;
        object.B::someFunction();
        object.A::someFunction();

    2. override that function in the derived class

    hierarchical inheritance: derived from same base class
    class A{}
    class B:public A{}
    class C:public A{}

*/