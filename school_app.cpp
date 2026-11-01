#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


struct Subject
{
    char subject_name[30];
    float score;
};

struct Student
{
    std::string student_name;
    int id;
    struct Subject sub_subject_subname[5];
};

struct Department
{
    std::string department_name;
    int student_count;
};


//this functions calculate student total scores for each student.
void CalculateStudentScores(const std::vector<Student>& students)
{
    for (const auto& student: students)
    {
        float totalscores = 0;
        std::cout << student.student_name;
        for (int j = 0; j < 5; j++)
        {
            totalscores += student.sub_subject_subname[j].score;
        }
        std::cout << " Your total scores is: " << totalscores << "\n";
    }
}

//this functions is for finding an out standing student base on their scores.
void FindBestStudent()
{
}

//this function is for checking student progress and recommand which major is more suitable for the student.
void FindStudentDepartment()
{
}

//this fnctions is for checking student scores and give them warning about their studying.
void CheckStudentScore()
{
}


//this function is for checking if student have already been added and to check if they have the same name and id.
bool checkAvailiableStudent(){

}

//this is a security check for student or teacher or an admin, teacher. and student to check their status
bool PasswordCheck(){

}


int main()
{

    std::string security_password;
    
    std::cout << "======Security System======";
    std::cout << "1.Are your a student?";
    std::cout << "2.Are you a Teacher?";
    std::cout << "3.Command";
    std::cout << "===========================";

    //availiable department for students.
    struct Department Computer_Sciences = {"Compuerter Sciences"};
    struct Department Digital_Buisness = {"Digital Buisness"};
    struct Department Cyber_Security = {"Cyber Security"};

    //student datas
    std:: vector<struct Student> students = {
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

    std::cout << "===================== Menu ==============================\n";
    std::cout << "1. Check student status.\n";
    std::cout << "2. Find student highest scores.\n";
    std::cout << "3. Find student suitable department.\n";
    std::cout << "4. Calculate Total scores for each student.\n";
    std::cout << "5. Add new student.\n";
    std::cout << "6. Exit.\n";
    std::cout << "=========================================================\n";

    std::cout << "Choice: ";
    int choice;

    std::cin >> choice;
    std::cout << "\n";

    std::cout << "=========================================================\n";

    switch (choice)
    {
    case 1:

        for (int i = 0; i < 5; i++)
        {
            std::cout << "\nYour name is: " << students[i].student_name << ". And Your Student ID is: " << students[i].id << ".\n";
            std::cout << "Your scores are:\n";
            for (int j = 0; j < 5; j++)
            {
                std::cout << students[i].sub_subject_subname[j].subject_name << " = ";
                std::cout << students[i].sub_subject_subname[j].score << "\n";
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





    default:
        std::cout << "Invalid choice please choose the correct Number based on the menu";
        return 0;
    }
    


    return 0;
}