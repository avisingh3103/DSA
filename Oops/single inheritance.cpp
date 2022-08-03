class instagram_user{
    
    private:

        string name;
        double phone;
        string password;
    
    public:
    
    void setDetails(string defaultpassword, string name, double phone, string password)
    {
        if(defaultpassword == "secret12345")
        {
            this->name = name;
            this->password = password;
            this->phone = phone;
            cout<<" instagram account is created "<<endl;
        }
        else{
            cout<<" wrong default password 420 "<<endl;
        }
    }
    
    string getName(string password)
    {
        if(password == this->password)
        {
            return name;
        }
        return "420 please enter correct password ";
    }
    
    
};

int main() {
   
    
    instagram_user harsh;
    
    harsh.setDetails("secret12345", "harsh", 39849238, "harsh@123");
    
    cout<<harsh.getName("harsh@123");
}
