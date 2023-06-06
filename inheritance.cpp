class ClassA
{
    //body of ClassA
};
 
class ClassB
{
    //body of ClassB
};
 
//derived from ClassA and ClassA
class ClassC : public ClassA, public ClassB
{
    //body of ClassC
};
 
//derived from ClassC
class ClassD : public ClassC
{
    //body of ClassD
};
