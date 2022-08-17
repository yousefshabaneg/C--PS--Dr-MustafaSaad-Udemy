#include <iostream>
using namespace std;
/*
    ? Hospital System ?
    ! Implement the following system for a hospital
    ! There are 20 different specialization (e.g. Children, Surgery, etc)
    ! For each specialization, there are only 5 available spots [queue]

    TODO: Adding a patient
      * Read the requested specialization [1-20].
      * Read his name and status (0 = regular, 1 urgent)
      * If 5 patients exist, apologize and don't accept.
      * If the user is regular, add in end of queue. Otherwise, add in Begin.

    TODO: Print patients, for the specialization that have waiting patients

    Todo:
      * Read the requested specialization. If no patients, inform the doctor
      * Otherwise, ask the patient to go with the Dr. Remove from the queue.
*/

// Global Variables
const int MAX_SPECIALIZATION = 20;
const int MAX_QUEUE = 5;

string names[MAX_SPECIALIZATION + 1][MAX_QUEUE + 1];
int status[MAX_SPECIALIZATION + 1][MAX_QUEUE + 1];
int queue_length[MAX_SPECIALIZATION + 1];

///////////////////////////////////

void showChoicesMessage()
{
  cout << "Enter your choice: \n\n";
  cout << "1- Add new patient" << endl;
  cout << "2- Print all patients" << endl;
  cout << "3- Get next patient" << endl;
  cout << "4- END the Program \n \n";
}

int menu()
{
  int choice = -1;
  while (choice == -1)
  {
    showChoicesMessage();
    cin >> choice;
    if (!(choice >= 1 && choice <= 4))
    {
      cout << "Invalid choice, try again...";
      choice = -1;
    }
  }
  return choice;
}

void shift_left(int spec, string names_sp[], int status_sp[])
{
  int len = queue_length[spec];
  for (int i = 1; i < len; i++)
  {
    names_sp[i - 1] = names_sp[i];
    status_sp[i - 1] = status_sp[i];
  }
  queue_length[spec]--;
}

void shift_right(int spec, string names_sp[], int status_sp[])
{
  int len = queue_length[spec];
  for (int i = len - 1; i >= 0; i--)
  {
    names_sp[i + 1] = names_sp[i];
    status_sp[i + 1] = status_sp[i];
  }
  queue_length[spec]++;
}

bool add_patient()
{
  int spec, st;
  string name;

  cout << "Enter Specialization, name, status: ";
  cin >> spec >> name >> st;

  int pos = queue_length[spec];
  if (pos >= MAX_QUEUE)
  {
    cout << "Sorry we can't add more patients for this Specialization\n";
    return false;
  }

  if (st == 0)
  {
    // regular
    names[spec][pos] = name;
    status[spec][pos] = st;
    queue_length[spec]++;
  }
  else
  {
    // urgent
    shift_right(spec, names[spec], status[spec]);
    names[spec][0] = name;
    status[spec][0] = st;
  }
  return true;
}

void print_patient(int spec, string names_sp[], int status_sp[])
{
  int len = queue_length[spec];
  if (len == 0)
    return;

  cout << "There are " << len << " Patients in specialization " << spec << endl;

  for (int i = 0; i < len; i++)
  {
    cout << names_sp[i] << " ";
    if (status_sp[i])
      cout << "urgent\n";
    else
      cout << "regular\n";
  }
  cout << endl;
}

void print_patients()
{
  cout << "********************\n";
  for (int spec = 0; spec < MAX_SPECIALIZATION; spec++)
  {
    print_patient(spec, names[spec], status[spec]);
  }
}

void get_next_patient()
{
  int spec;
  cout << "Enter specialization: ";
  cin >> spec;

  int len = queue_length[spec];

  if (len == 0)
  {
    cout << "No patients at the moment. Have rest, Dr\n";
    return;
  }

  // Let patients goes to dr
  cout << names[spec][0] << " Please go to the Dr\n";

  // delete the patient in position 0
  shift_left(spec, names[spec], status[spec]);
}

void hospital_system()
{
  while (true)
  {
    int choice = menu();

    if (choice == 1)
      add_patient();
    else if (choice == 2)
      print_patients();
    else if (choice == 3)
      get_next_patient();
    else
      break;
  }
}

int main()
{
  hospital_system();
  return 0;
}
