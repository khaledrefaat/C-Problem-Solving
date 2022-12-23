//#include <iostream>
//
//using namespace std;
//
//struct Patient {
//    int specialization{};
//    string name;
//    int status{};
//};
//
//struct Hospital {
//    const int MAXSPECIALIZATION = 5;
//    static const int MAXPATIENTS = 100;
//    Patient patients[MAXPATIENTS];
//    int count = 0;
//
//    bool checkForSpace(int specialization) {
//        int counter = 0;
//        for (int i = 0; i < MAXPATIENTS; i++) if (specialization == patients[i].specialization) counter++;
//
//        return counter < MAXSPECIALIZATION;
//    }
//
//    void addPatient() {
//        cout << "Please enter a Specialization, name, status: ";
//
//        int specialization, status;
//        string name;
//        cin >> specialization >> name >> status;
//        Patient patient = Patient{specialization, name, status};
//
//        if (checkForSpace(patient.specialization)) patients[count++] = patient;
//        else cout << "Sorry we can't add more patients to this specialization.\n";
//    }
//
//    bool checkIsPrinted(int index, int arr[]) {
//        bool didPrint = false;
//        for (int i = 0; i < 20; i++) if (patients[index].specialization == arr[i]) didPrint = true;
//        return didPrint;
//    }
//
//    void printPatients(const int arr[], const int counter) {
//        cout << "There are " << counter << " patients in specialization " << patients[arr[0]].specialization << "\n";
//
//        for (int i = 0; i < counter; i++) {
//            int index = arr[i];
//            if (patients[index].status == 0) {
//                cout << patients[index].specialization << " " << patients[index].name << " urgent\n";
//            }
//        }
//
//        for (int i = 0; i < counter; i++) {
//            int index = arr[i];
//            if (patients[index].status == 1) {
//                cout << patients[index].specialization << " " << patients[index].name << " regular\n";
//            }
//        }
//    }
//
//    void printAllPatients() {
//        int printedList[20];
//        int printedListCount = 0;
//        for (int i = 0; i < 20; i++) printedList[i] = -1;
//
//        for (int i = 0; i < count; i++) {
//            if (checkIsPrinted(i, printedList) || patients[i].specialization == -1) continue;
//            int indexes[MAXSPECIALIZATION];
//            int counter = 0;
//
//            for (int j = 0; j < count; j++) {
//                if (patients[i].specialization == patients[j].specialization) indexes[counter++] = j;
//            }
//            printPatients(indexes, counter);
//            printedList[printedListCount] = patients[i].specialization;
//        }
//    };
//
//    void getNextPatient() {
//        int specialization;
//        cin >> specialization;
//
//        bool found = false;
////        // Loop For urgent patients
//        for (int i = 0; i < count; i++) {
//            if (specialization == patients[i].specialization && patients[i].status == 0) {
//                cout << patients[i].name << " Please go with the doctor\n";
//                patients[i].specialization = -1;
//                found = true;
//                break;
//            }
//        }
//        if (!found) {
//            for (int i = 0; i < count; i++) {
//                if (specialization == patients[i].specialization) {
//                    cout << patients[i].name << " Please go with the doctor\n";
//                    patients[i].specialization = -1;
//                    found = true;
//                    break;
//                }
//            }
//        }
//
//        if (!found) cout << "No patients at the moment\n";
//    };
//
//    static int menu() {
//        int choice;
//        cout << "\nEnter your choice:\n";
//        cout << "1 - Add new Patient\n";
//        cout << "2 - Print all Patients\n";
//        cout << "3 - Get next Patient\n";
//        cout << "4 - Exit\n";
//        cin >> choice;
//        return choice;
//    }
//};
//
//int main() {
//    Hospital newHospital = Hospital();
//    while (true) {
//        int choice = Hospital::menu();
//
//        if (choice == 1) newHospital.addPatient();
//        else if (choice == 2) newHospital.printAllPatients();
//        else if (choice == 3) newHospital.getNextPatient();
//        else if (choice == 4) break;
//        else cout << "Invalid Choice";
//    }
//}