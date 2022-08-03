class person{
    public:
    string name;
    int age;
};
class akash:public person{
    
};
int main(){
    akash clone;
    clone.name="akash";
    cout<<clone.name;
}
