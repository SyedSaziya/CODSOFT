#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Task {
    string description;
    bool completed;
};

class TodoList {
private:
    vector<Task> tasks;

public:
    void addTask(const string& description) {
        Task newTask;
        newTask.description = description;
        newTask.completed = false;
        tasks.push_back(newTask);
        cout << "Task added: " << description << endl;
    }

    void viewTasks() {
        if (tasks.empty()) {
            cout << "No tasks in the list." << endl;
        } else {
            cout << "Tasks in the list:" << endl;
            for (size_t i = 0; i < tasks.size(); ++i) {
                cout << i + 1 << ". ";
                if (tasks[i].completed) {
                    cout << "[Completed] ";
                }
                cout << tasks[i].description << endl;
            }
        }
    }

    void deleteTask(size_t index) {
        if (index >= 1 && index <= tasks.size()) {
            tasks.erase(tasks.begin() + index - 1);
            cout << "Task deleted successfully." << endl;
        } else {
            cout << "Invalid task number. Please try again." << endl;
        }
    }
};

int main() {
    TodoList todoList;
    int choice;
    string taskDescription;

    do {
        cout << "Todo List Manager" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Delete Task" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cin.ignore(); // Clear newline from the input buffer
                cout << "Enter task description: ";
                cin.clear();
                getline(cin, taskDescription);
                todoList.addTask(taskDescription);
                break;
            case 2:
                todoList.viewTasks();
                break;
            case 3:
                size_t taskIndex;
                cout << "Enter the task number to delete: ";
                cin >> taskIndex;
                todoList.deleteTask(taskIndex);
                break;
            case 4:
                cout << "Exiting program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

    } while (choice != 4);

    return 0;
}
