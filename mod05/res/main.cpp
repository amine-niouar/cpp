
#include <iostream>

class ArguementExeption : public std::exception
{
    public:
        virtual const char* what() const throw()
        {
            return ("not enouph arguments");
        }
};

class Test
{
    public:
        class ErrorTest
        {

        };
        class ScopeTracker
        {
            private:
                std::string scope;
                std::string part;
            public:
                ScopeTracker(std::string s,std::string p)
                {
                    scope = s;
                    part = p;
                }
                void printMsg()
                {
                    std::cout << "(" << scope << ")" << " : " << part << std::endl;
                }
        };
        void stupidFunc()
        {
            if(4 > 3)
                throw ErrorTest();
        }
};

int main(int ac,char **av)
{
    (void)av;

    try
    {
        Test t;
         if(5 < 6)
        {
            //std::cout << "entering here" << std::endl;
             throw Test::ScopeTracker("main function " , "how 5 is small than 6");
        }
     
        t.stupidFunc();

       

        if(ac < 2)
            throw ArguementExeption();
        
           
    }
    catch(Test::ScopeTracker &st)
    {
        st.printMsg();
    }
    catch(Test::ErrorTest)
    {
         std::cout << "Yes monkeys 4 is big than 3" << std::endl; 
    }
   
    catch(ArguementExeption &e)
    {
        std::cout << e.what() << std::endl; 
    }
}