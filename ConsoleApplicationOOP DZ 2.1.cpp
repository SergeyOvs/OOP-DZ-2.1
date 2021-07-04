#include <iostream>
using namespace std;

class Person
{
protected:
     string name;
     string gender;
     int age;
     int weight;
     static int count;
public:
    
    Person(string n, string g, int a, int w) :
        name(n), gender(g), age(a), weight(w)
    {
        count++;
    }
       
    ~Person()
    {
        count--;
    }
       
    string getName ()const
    {
        return name;
    }
    string getGender()const
    {
        return gender;
    }
    int getAge()const
    {
        return age;
    }
    int getWeight()const
    {
        return weight;
    }
    static int getCount()
    {
        return count;
    }
    
};
int Person::count = 0;

class Student : public Person
{

public:

    int yearofstudy;        // Год обучения )))

    Student(string n, string g, int a, int w, int y) :yearofstudy(y),
        Person(n, g, a, w)
    {
        
    }
        
    int getYearofstudy()const
    {
        return yearofstudy;
    }
    void chengeYearofstudy()  // Метод изменения года обучения
    {
        int Inc;
        cout << "Add year of study" << endl;
        cin >> Inc;
        yearofstudy += Inc;
    }

    void print()const
    {
        cout << name << " " << endl <<gender << " " << endl
            <<age <<endl<< weight <<endl<< yearofstudy << endl<<endl;
    }
};
    
int main()
{
    Student ivan("Ivan", "man", 18, 62, 2);
    Student igor("Igor", "man", 17, 65, 1);
    Student olga("Olga", "female", 17, 41, 1);
    Student sveta("Sveta", "female", 19, 47, 3);
     
     olga.print();

     ivan.print();
     ivan.chengeYearofstudy();
     ivan.print();

     cout << " Objects were created  " << Student::getCount() << endl;
}

       

     




