#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Question {
    string questionText;
    string options[4];  // Use an array for options
    int correctAnswerIndex;
};

class Quiz {
private:
    Question questions[15]; // Array of questions
    int score;

public:
    Quiz(const string& subject) : score(0) {
        if (subject == "Database") {
            // Initialize Database questions
            questions[0] = {"What does SQL stand for?", {"Structured Query Language", "Simple Query Language", "Sequential Query Language", "None of the above"}, 0};
            questions[1] = {"Which of the following is a type of database?", {"Relational", "Non-relational", "Both", "None"}, 2};
            questions[2] = {"What is a primary key?", {"A unique identifier", "A duplicate identifier", "A foreign key", "None"}, 0};
            questions[3] = {"What is normalization?", {"Process of organizing data", "Process of de-normalizing data", "Backing up data", "None"}, 0};
            questions[4] = {"Which command is used to insert data in SQL?", {"INSERT", "ADD", "UPDATE", "CREATE"}, 0};
            questions[5] = {"What does DBMS stand for?", {"Database Management System", "Data Backup Management System", "Data Base Management Service", "None"}, 0};
            questions[6] = {"Which of the following is a NoSQL database?", {"MySQL", "MongoDB", "SQL Server", "Oracle"}, 1};
            questions[7] = {"What is a foreign key?", {"A unique identifier for a record", "A key used to link two tables", "A duplicate key", "None"}, 1};
            questions[8] = {"What is a data model?", {"A framework for organizing data", "A programming language", "A software application", "None"}, 0};
            questions[9] = {"Which SQL command is used to retrieve data?", {"GET", "SELECT", "FETCH", "PULL"}, 1};
            questions[10] = {"What is a view in SQL?", {"A virtual table", "A physical table", "A command", "None"}, 0};
            questions[11] = {"Which of the following is not a database object?", {"Table", "View", "Column", "Report"}, 3};
            questions[12] = {"What is a join in SQL?", {"Combining rows from two or more tables", "Splitting tables", "Merging databases", "None"}, 0};
            questions[13] = {"Which of the following commands is used to delete a table?", {"DROP", "DELETE", "REMOVE", "CLEAR"}, 0};
            questions[14] = {"What is a transaction?", {"A sequence of operations performed as a single unit", "A type of query", "A command", "None"}, 0};
        } else if (subject == "BBA") {
            // Initialize BBA questions
            questions[0] = {"What does BBA stand for?", {"Bachelor of Business Administration", "Business and Bachelor Administration", "Bachelor in Business Accounting", "None of the above"}, 0};
            questions[1] = {"What is marketing?", {"The action of promoting and selling products", "Buying products", "Analyzing market trends", "None"}, 0};
            questions[2] = {"Which of the following is a function of management?", {"Planning", "Organizing", "Leading", "All of the above"}, 3};
            questions[3] = {"What is finance?", {"Management of money", "Production of goods", "Marketing products", "None"}, 0};
            questions[4] = {"What does SWOT stand for?", {"Strengths, Weaknesses, Opportunities, Threats", "Sales, Work, Operations, Team", "None of the above", "Systematic Work Order Techniques"}, 0};
            questions[5] = {"What is entrepreneurship?", {"The process of starting a business", "Managing a company", "Working for a company", "None"}, 0};
            questions[6] = {"Which of the following is a type of business organization?", {"Sole Proprietorship", "Partnership", "Corporation", "All of the above"}, 3};
            questions[7] = {"What is the primary goal of a business?", {"To make profit", "To create jobs", "To provide services", "None"}, 0};
            questions[8] = {"Which of the following is a type of market structure?", {"Perfect competition", "Monopoly", "Oligopoly", "All of the above"}, 3};
            questions[9] = {"What is human resource management?", {"Managing an organization's workforce", "Selling products", "Financial management", "None"}, 0};
            questions[10] = {"What does ROI stand for?", {"Return on Investment", "Rate of Interest", "Revenue on Investment", "None"}, 0};
            questions[11] = {"What is a business plan?", {"A document outlining business goals", "A marketing strategy", "A financial report", "None"}, 0};
            questions[12] = {"Which of the following is a key component of marketing?", {"Promotion", "Distribution", "Pricing", "All of the above"}, 3};
            questions[13] = {"What is accounting?", {"The process of recording financial transactions", "Managing human resources", "Marketing products", "None"}, 0};
            questions[14] = {"What does KPI stand for?", {"Key Performance Indicator", "Key Profit Index", "Knowledge Performance Indicator", "None"}, 0};
        } else {
            // Initialize Programming questions
            questions[0] = {"What does OOP stand for?", {"Object-Oriented Programming", "Optimized Order Processing", "Operative Output Process", "None"}, 0};
            questions[1] = {"Which of the following is a programming language?", {"HTML", "CSS", "Java", "All of the above"}, 2};
            questions[2] = {"What is a variable?", {"A storage location for data", "A type of function", "A type of loop", "None"}, 0};
            questions[3] = {"What is an array?", {"A collection of elements", "A single element", "A type of function", "None"}, 0};
            questions[4] = {"Which of the following is not a programming paradigm?", {"Procedural", "Functional", "Conceptual", "Object-Oriented"}, 2};
            questions[5] = {"What is recursion?", {"A function that calls itself", "A type of loop", "A data structure", "None"}, 0};
            questions[6] = {"What is a function?", {"A block of code that performs a specific task", "A variable", "A loop", "None"}, 0};
            questions[7] = {"Which of the following is a loop structure?", {"For", "While", "Do-while", "All of the above"}, 3};
            questions[8] = {"What is an algorithm?", {"A step-by-step procedure to solve a problem", "A type of variable", "A data structure", "None"}, 0};
            questions[9] = {"Which of the following is a data type?", {"Integer", "String", "Float", "All of the above"}, 3};
            questions[10] = {"What is a class in OOP?", {"A blueprint for creating objects", "A type of variable", "A data structure", "None"}, 0};
            questions[11] = {"Which of the following is a conditional statement?", {"if", "for", "while", "none"}, 0};
            questions[12] = {"What is the purpose of a constructor?", {"To initialize an object", "To destroy an object", "To copy an object", "None"}, 0};
            questions[13] = {"What does API stand for?", {"Application Programming Interface", "Application Program Integration", "Advanced Programming Interface", "None"}, 0};
            questions[14] = {"What is a pointer?", {"A variable that stores a memory address", "A type of loop", "A data structure", "None"}, 0};
        }
    }

    void start() {
        cout << "Welcome to the Quiz!\n\n";
        for (int i = 0; i < 15; ++i) {
            cout << "Question " << (i + 1) << ": " << questions[i].questionText << endl;
            for (int j = 0; j < 4; ++j) {
                cout << j + 1 << ". " << questions[i].options[j] << endl;
            }

            int answer;
            cout << "Enter the number of your answer (1-4): ";
            cin >> answer;

            if (answer - 1 == questions[i].correctAnswerIndex) {
                cout << "Correct!\n";
                score++;
            } else {
                cout << "Incorrect! The correct answer is: " << questions[i].options[questions[i].correctAnswerIndex] << endl;
            }
            cout << endl;
        }

        cout << "Quiz finished! Your score: " << score << " out of 15." << endl;

        if (score >= 10) {
            cout << "Congratulations! You passed the quiz!\n";
        } else {
            cout << "Sorry, you failed the quiz. Better luck next time!\n";
        }
    }

    int getScore() const {
        return score;
    }
};

int main() {
    string subjects[] = {"Database", "BBA", "Programming"};
    char choice;
    do {
        cout << "Select a subject:\n";
        for (int i = 0; i < 3; ++i) {
            cout << i + 1 << ". " << subjects[i] << endl;
        }
        cout << "Enter your choice (1-3): ";
        int subjectChoice;
        cin >> subjectChoice;

        if (subjectChoice < 1 || subjectChoice > 3) {
            cout << "Invalid choice. Please try again.\n";
            continue;
        }

        Quiz quiz(subjects[subjectChoice - 1]);
        quiz.start();

        cout << "Would you like to retake the same subject? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "Would you like to select another subject? (y/n): ";
    cin >> choice;

    while (choice == 'y' || choice == 'Y') {
        main(); // Restart the quiz for a new subject
    }

    cout << "Thank you for playing!\n";
    return 0;
}

