#include <cstdlib>
#include <unistd.h>
#include "StudentList.h"


StudentList myList;

void MainMenu();
int main() {
  MainMenu();
  return 0;
}
void addStudent()
{
  std::string firstName;
  std::cout<<"firstname : ";
  std::cin>>firstName;
  std::string lastName;
  std::cout<<"last name : ";
  std::cin>>lastName;
  std::string id;
  std::cout<<"student id : ";
  std::cin>>id;
  myList.push(Student(firstName,lastName,id));
  system("clear");
  std::cout << "student successfully added"<<std::endl;
  usleep(1000000*2);
}
void showAllOfList()
{
  myList.showList();
  std::cout << "enter 0 to main menu : ";
  char get = '0';
  std::cin>>get;

}
void showTopOfList()
{
  myList.showTop();
  std::cout << "enter 0 to main menu : ";
  char get = '0';
  std::cin>>get;
}
void searchStudent()
{
  std::string firstName = "0";
  std::cout<<"firstname : ";
  std::cin>>firstName;
  std::string lastName = "0";
  std::cout<<"last name : ";
  std::cin>>lastName;
  std::string id = "0";
  std::cout<<"student id : ";
  std::cin>>id;

  system("clear");
  std::vector<Student> founded = myList.searchStudents(Student(firstName,lastName, id));
  if(founded.size())
  {
    for(int i = 0; i < founded.size(); i++) {
      std::cout<<i+1<<"  : "<<std::endl;
      founded[i].print();
    }
      while(true)
      {
        std::cout << "which one you want to deleted ? " << std::endl;
        std::cout << "enter the number of student to delete it or enter 0 to main menu : ";
        int insert;
        std::cin >> insert;
        if (insert <= founded.size() && insert > 0)
        {
          myList.remove(founded[insert - 1]);
          return;
        }
        else if (insert == 0)
          return;
        else
          std::cout << "please enter a valid number" << std::endl;
      }

  }
  else {
    std::cout << "          --------->   can not find it    <---------" << std::endl;
    usleep(1000000*3);
  }
}

void printMainMenu(){
  std::cout<<"                                your list has " << myList.size()<<" student" <<std::endl;
  std::cout<<"a : Add student"<< std::endl;
  std::cout<<"b : Show all of List"<< std::endl;
  std::cout<<"c : Show top of List"<< std::endl;
  std::cout<<"d : Search student"<< std::endl;
  std::cout<<"p : print to out file"<<std::endl;
  std::cout<<"e : Exit"<< std::endl;

}

void MainMenu()
{
  system("clear");
  while (true)
  {
    system("clear");
    printMainMenu();
    char choice;
    std::cin >> choice;
    switch (choice) {
      case 'a':
        system("clear");
        addStudent();
        break;
      case 'b':
        system("clear");
        showAllOfList();
        break;
      case 'c':
        showTopOfList();
        break;
      case 'd':
        system("clear");
        searchStudent();
        break;
      case 'e':
        system("clear");
        return;
      default:
        system("clear");
        std::cout << "           ERROR    ----->    please choose from available characters (a, b ,c ,d ,e)"
                  << std::endl;
        usleep(1000000 * 3);
        MainMenu();
        break;
    }
  }
}