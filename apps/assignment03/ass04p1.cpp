using namespace std;
  
void menu()
{
    cout << "Press 1 to Display all Items\n";
    cout << "Press 2 to Display selected Item\n";
    cout << "Press 3 to Mark task as done\n";
    cout << "Press 4 to Exit the program\n";
}
  
void result(int choice, int a, int b)
{
  
    switch (choice) {
    case 1: {
        cout << "Display all Items:"<<"\n";
		for (i = v.begin(); i != v.end(); ++i)
		{
			cout << *i << " ";
		}
        break;
    }
    case 2: {
        cout << "Display selected item: " << "\n";
		for (i = v.begin(); i != v.end(); ++i) {
        cout << *i << " ";
		}
        break;
		}
    case 3: {
        cout << "Exiting program" << "\n";
        break;
    }
    case 4: {
        cout << "Thank you\n";
        break;
    }
    default:
        printf("Wrong Input\n");
    }
}
  
int main()
{
  
  
    int choice, res;
  
    menu();
  
    cout << "Enter your choice:\n";
    cin>>choice;
    cout << "Choice is " << choice << endl;
  
    result(choice, a, b);
  
    return 0;
}