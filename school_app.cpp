#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <cctype>

#include "Data.h"

//accounts data
struct UserAccount{
    std::string username;
    std::string passwoords;
};
struct Subject
{
    char subject_name[30];
    float score;
};

struct Student
{
    std::string student_name;
    int id;
    struct Subject sub_subject[5];
};

struct Department
{
    std::string department_name;
    int student_count;
};

// this functions calculate student total scores for each student.
void CalculateStudentScores(const std::vector<Student> &students)
{
    for (const auto &student : students)
    {
        float totalscores = 0;
        std::cout << student.student_name;
        for (int j = 0; j < 5; j++)
        {
            totalscores += student.sub_subject[j].score;
        }
        std::cout << " Your total scores is: " << totalscores << "\n";
    }
}

// this functions is for finding an out standing student base on their scores.
void FindBestStudent()
{
}

// this function is for checking student progress and recommand which major is more suitable for the student.
void FindStudentDepartment()
{
}

// this fnctions is for checking student scores and give them warning about their studying.
void CheckStudentScore()
{
}

// this function is for checking if student have already been added and to check if they have the same name and id.
bool checkAvailiableStudent()
{
    return false;
}

// this is a security check for student or teacher or an admin, teacher. and student to check their status
bool PasswordCheck()
{
    return false;
}

Student *FindStudentByID()
{
    return nullptr;
}

bool checkStrongPasswords()
{
    return false;
}

bool TeacherPasswordsChecks(const std::string *INPUT_password)
{

    if (INPUT_password == nullptr)
        return false;

    std::hash<std::string> hasher;
    size_t teacher_stored_passwords = hasher("Kiri100ZZ@199");

    if (hasher(*INPUT_password) == teacher_stored_passwords)
    {
        return true;
    }

    return false;
}

bool StudentPasswordsCheck()
{
    return false;
}

bool SecurityPasswordsCheck()
{
    return false;
}

int main()
{

    // availiable department for students.
    struct Department Computer_Sciences = {"Compuerter Sciences"};
    struct Department Digital_Buisness = {"Digital Buisness"};
    struct Department Cyber_Security = {"Cyber Security"};

    // student datas
    std::vector<struct Student> students = {
        {
            "Dara",
            12001,
            {
                {"Math", 1},
                {"Science", 0},
                {"Chemistry", 0},
                {"Physic", 0},
                {"Algorithmns", 0},
            },
        },
        {
            "Chanda",
            12002,
            {
                {"Math", 2},
                {"Science", 0},
                {"Chemistry", 0},
                {"Physic", 0},
                {"Algorithmns", 0},
            },
        },

        {
            "Chantrea",
            12003,
            {
                {"Math", 3},
                {"Science", 0},
                {"Chemistry", 0},
                {"Physic", 0},
                {"Algorithmns", 0},
            },
        },
        {
            "Nyroth",
            12004,
            {
                {"Math", 4},
                {"Science", 0},
                {"Chemistry", 0},
                {"Physic", 0},
                {"Algorithmns", 0},
            },
        },
        {
            "Neat",
            12005,
            {
                {"Math", 5},
                {"Science", 0},
                {"Chemistry", 0},
                {"Physic", 0},
                {"Algorithmns", 0},
            },
        }};

    std::string Inptut_Passwrods;
    int choice =0;
    do
    {
        std::cout << "======Security System======\n";
        std::cout << "1.Are your a student?\n";
        std::cout << "2.Are you a Teacher?\n";
        std::cout << "3.Command\n";
        std::cout << "4.Exit\n";
        std::cout << "===========================\n";
        std::cout << "Enter: ";
        std::cin >> choice;
        std::cout << "\n";

        if(choice == 1){
            int sub_choice = 0;
            std::cout << "\n==================================================================\n"; 
            std::cout << "1. login.\n";
            std::cout << "2. sign in. 'If you already have an accounts'\n";
            std::cout << "==================================================================\n";
            std::cin >> sub_choice;
            std::cout << "\n";
            
            if (sub_choice == 1){

            }else if(sub_choice == 2){

            }else{
                std::cout << "invalid input!!!\n";
                std::cout << "Please enter number that are on the menu.\n";
                std::cout << "\nEnter:";
            }


        }


        if (choice == 2)
        {
            bool login_success = false;
            std::cout << "password: ";
            std::cin >> Inptut_Passwrods;
            std::cout << "\n";
            std::cout << "===========================\n";
            do
            {
                std::cout << "Enter 'Return' to go back to the previous menu.\n";
                std::cout << "\nPasswords is Incorrected. \nPlease try again.\n";
                std::cout << "\npassword: ";
                std::cin >> Inptut_Passwrods;
                std::cout << "\n";
                std::string check_words = Inptut_Passwrods;
                std::string check_word = Inptut_Passwrods;
                if(TeacherPasswordsChecks(&Inptut_Passwrods)){
                    login_success = true;
                }

                std::transform(check_word.begin(), check_word.end(), check_word.begin(), ::tolower);
                if(check_word == "return"){
                    break; 
                }
            } while (!login_success);

            if (login_success)
            {
                int sub_choice = 0;
                do
                {
                    std::cout << "\n===================== Teacher Adminstratiohns ==============================\n";
                    std::cout << "1. Check student performance and status.\n";
                    std::cout << "2. Find students by their ID.\n";
                    std::cout << "3. Search for student highest scores.\n";
                    std::cout << "4. Find student suitable department.\n";
                    std::cout << "6. Calculate Total scores for each student.\n";
                    std::cout << "7. Implementing student scores.\n";
                    std::cout << "8. Add new student.\n";
                    std::cout << "9. Give students warning.\n";
                    std::cout << "10.Return.\n";
                    std::cout << "11. Exit.\n";
                    std::cout << "==============================================================================\n";

                    std::cin >> sub_choice;

                    if (sub_choice != 0 && sub_choice > 11)
                    {
                        switch (choice)
                        {
                        case 1:

                            for (int i = 0; i < 5; i++)
                            {
                                std::cout << "\nYour name is: " << students[i].student_name << ". And Your Student ID is: " << students[i].id << ".\n";
                                std::cout << "Your scores are:\n";
                                for (int j = 0; j < 5; j++)
                                {
                                    std::cout << students[i].sub_subject[j].subject_name << " = ";
                                    std::cout << students[i].sub_subject[j].score << "\n";
                                }
                            }
                            break;

                        case 2:
                            break;

                        case 3:
                            break;

                        case 4:
                            CalculateStudentScores(students);

                            break;

                        case 5:
                            break;

                        case 6:
                            break;

                        case 7:
                            break;

                        case 8:
                            break;

                        case 9:
                            break;

                        default:
                            std::cout << "Invalid choice please choose the correct Number based on the menu\n";
                            return 0;
                        }
                    }
                    else
                    {
                        std::cout << "Invalid choices.\n";
                    }
                } while (sub_choice == 10);
            }
        }
    } while (choice == 1 || choice == 2 || choice == 3 || choice == 4);

    return 0;
}
