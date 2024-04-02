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

class BelovPrinter : public BasePrinter
{
public:
    void Print() override
    {
        std::cout <<"This is Belov Daniil"<< std::endl;
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
<<<<<<< HEAD
class MongushPrinter: public BasePrinter
{
        public:
        void Print() override
        {
            std::cout << "Mongush Aldyn-Sai" << std::endl;
        }
};
=======

class CheprunovPrinter : public BasePrinter {
public:
    void Print() override
    {
        std::cout << "Hello, Cheprunov Stepan" << std::endl;
    }
};

>>>>>>> origin/Cheprunov_Stepan_branch
int main()
{
    std::vector<BasePrinter*> units;
    int userChoice;
    bool bRun = true;
    while (bRun)
    {
<<<<<<< HEAD
        std::cout << "Do you want to add a prep (1) or student (2) or exit (0) or print all units (3) or administrator (4) or Putyatin (5) or"\
        " Mongush (6) or Belov (7) ?"<<std::endl;
=======
        std::cout << "Do you want to add a prep (1) or student (2) or exit (0) or print all units (3) or administrator (4) or Name(5)?" << std::endl;
>>>>>>> origin/Cheprunov_Stepan_branch
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
            for (auto it = units.begin(); it != units.end(); ++it)
            {
                (*it)->Print();
            }
            break;
        case 4:
            units.push_back(new AdminPrinter());
            break;
        case 5:
<<<<<<< HEAD
            units.push_back(new PutyatinPrinter());
            break;
        case 6:
            units.push_back(new MongushPrinter());
            break;
        case 7:
            units.push_back(new BelovPrinter());
=======
            units.push_back(new CheprunovPrinter());
>>>>>>> origin/Cheprunov_Stepan_branch
            break;
        default:
            break;
        }
    }

}