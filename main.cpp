#include <iostream>
#include <vector>
// virtual func
// pure virtual func
class BasePrinter
{
public:
    virtual void Print() = 0;
};

class PutyatinPrinter : public BasePrinter
{
public:
    void Print() override
    {
        std::cout << "Putyatin Ilya" << std::endl; 
    }
};

class PrepPrinter : public BasePrinter
{
public:
    void Print() override
    {
        std::cout << "Hello, this is Top prep" << std::endl;
    }
};

class StudentPrinter : public BasePrinter
{
public:
    void Print() override
    {
        std::cout << "Hello, this is Top student" << std::endl;
    }
};
class AdminPrinter : public BasePrinter
{
public:
    void Print() override
    {
        std::cout << "Hello, this is Top adminnistrator" << std::endl;
    }
};
class MongushPrinter: public BasePrinter
{
        public:
        void Print() override
        {
            std::cout << "Mongush Aldyn-Sai" << std::endl;
        }
};
int main()
{
    std::vector<BasePrinter*> units;
    int userChoice;
    bool bRun = true;
    while(bRun)
    {
        std::cout << "Do you want to add a prep (1) or student (2) or exit (0) or print all units (3) or administrator (4) or Putyatin (5) ?"<<std::endl;
        std::cin >> userChoice;

        switch (userChoice)
        {
        case 0: // exit
            bRun = false;
            break;
        case 1:
            units.push_back(new PrepPrinter());
            break;
        case 2:
            units.push_back(new StudentPrinter());
            break;
        case 3:
            for(auto it = units.begin(); it != units.end(); ++it)
            {
                (*it)->Print();
            }
            break;
        case 4:
            units.push_back(new AdminPrinter());
            break;
        case 5:
            units.push_back(new PutyatinPrinter());
            break;
        default:
            break;
        }
    }

}